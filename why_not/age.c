#include "types.h"

/**
 * A função new_age realiza a alocação de memória para a estrutura t_age
 * para que ela possa ser usada corretamente pela função age.
*/
static t_age *new_age(int age, const char *name, const char *describe)
{
    t_age *new_age;
	
	new_age = (t_age *)malloc(sizeof(t_age));
    new_age->metadata = (t_metadata *)malloc(sizeof(t_metadata));
    if (new_age == NULL || new_age->metadata == NULL)
        exit(1);
    new_age->age = age;
    new_age->metadata->name = strdup(name);
    new_age->metadata->describe = strdup(describe);
    return (new_age);
}

/**
 * A função controla a visibilidade e uso da estrutura t_age.
*/
static t_age *age(const char *action, int initialize, ...)
{
    static t_age *internal_age;
    va_list args;
	int newer_age;

    if (initialize)
    {
        if (internal_age)
            destroy_age();
        internal_age = new_age(0, AGE, DESC_AGE);
		newer_age = 0;
    }
    va_start(args, initialize);
    if (strcmp(action, "get") == 0)
    {
        va_end(args);
        return (internal_age);
    }
    else if (strcmp(action, "set") == 0)
    {
        va_end(args);
        newer_age = va_arg(args,int);
        internal_age->age = newer_age;
        return (internal_age);
    }
    return (NULL);
}

static t_age *get_age(void)
{
	return (age("get", 0));
}

/**
 * A função destroy_age libera a memória alocada para a estrutura t_age.
*/
void destroy_age(void)
{
	t_age *age;

	age = get_age();
    if (age == NULL)
        return;
    free(age->metadata->name);
    free(age->metadata->describe);
    free(age->metadata);
    free(age);
}

char *get_age_type(void)
{
	if (age("get", 0) == NULL)
		return (AGE);
	return ((char *)age("get", 0)->metadata->name);
}

char *get_age_type_describe(void)
{
	if (age("get", 0) == NULL)
		return (DESC_AGE);
	return ((char *)age("get", 0)->metadata->describe);
}

int	get_age_value(void)
{
	if (age("get", 0) == NULL)
		return (0);
	return (age("get", 0)->age);
}

void	set_age(int new_age)
{
	age("set", 1, new_age);
}

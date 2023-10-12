#include "schrodinger.h"

/**
 * A função age é declarada como static, portanto ela só pode ser acessada
 * dentro do arquivo age.c.
 * desta forma cria-se encapsulamento e somente as funções get_age e set_age
 * podem acessar a variável internal_age e alterá-la.
*/
static void	age(const char *action, int initialize, int *value, int new_value)
{
	static int	internal_age;

	if (initialize)
		internal_age = 0;
	if (strcmp(action, "get") == 0)
		*value = internal_age;
	else if (strcmp(action, "set") == 0)
		internal_age = new_value;
}

int	get_age(void)
{
	int	ptr;

	age("get", 0, &ptr, 0);
	return (ptr);
}

void	set_age(int new_age)
{
	age("set", 1, 0, new_age);
}

#include "schrodinger.h"

/**
 * A função age é declarada como static, portanto ela só pode ser acessada
 * dentro do arquivo age.c.
 * desta forma cria-se encapsulamento e somente as funções get_age e set_age
 * podem acessar a variável internal_age e alterá-la.
*/
static int	age(const char *action, int initialize, ...)
{
	static int	internal_age;
	va_list		args;

	if (initialize)
		internal_age = 0;
	va_start(args, initialize);
	if (strcmp(action, "get") == 0)
	{
		va_end(args);
		return (internal_age);
	}
	else if (strcmp(action, "set") == 0)
	{
		va_end(args);
		internal_age = va_arg(args, int);
	}
	return (0);
}

int	get_age(void)
{
	return (age("get", 0));
}

void	set_age(int new_age)
{
	age("set", 1, new_age);
}

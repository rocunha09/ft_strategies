/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   age.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafade-o <rafade-o@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:20:02 by rafade-o          #+#    #+#             */
/*   Updated: 2023/05/26 00:20:04 by rafade-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int	age(const char *action, int initialize, ...)
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

int	main(void)
{
	int	id;

	id = 30;
	set_age(id);
	printf("the age is: %d\n", get_age());
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal.c                                           :+:      :+:    :+:   */
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
#include <unistd.h>

void	age(const char *action, int initialize, int *value, int new_value)
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

int	main(void)
{
	int	id;

	id = 50;
	set_age(id);
	printf("A age é: %d\n", get_age());
	return (0);
}

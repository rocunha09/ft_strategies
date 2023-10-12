/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafade-o <rafade-o@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:20:02 by rafade-o          #+#    #+#             */
/*   Updated: 2023/05/26 00:20:04 by rafade-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

int main(void)
{
    int newAge = 20;

    printf("teste: %i\n", get_age_value());

    printf("teste: %s\n", get_age_type());

    printf("teste: %s\n", get_age_type_describe());

    set_age(newAge);

    printf("teste: %i\n", get_age_value());

    printf("teste: %s\n", get_age_type());

    printf("teste: %s\n", get_age_type_describe());

    set_age(50);

    printf("teste: %i\n", get_age_value());

    ccleaner();

    return (0);
}

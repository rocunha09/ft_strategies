/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafade-o <rafade-o@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:20:02 by rafade-o          #+#    #+#             */
/*   Updated: 2023/05/26 00:20:04 by rafade-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../teste.h"

/**
 * Obtém o diretório de trabalho atual.
 * 
 * Função criada neste local para simular a construção da função que deve
 * ficar originalmente no projeto.
 * 
 * @param void
 * @return char *
 */
char *get_pwd(void)
{
    char *buf;
    size_t size;

    size = 100;
    buf = (char *)malloc((size_t)size);
    if (buf == NULL)
    {
        perror("Erro ao alocar memória");
        return (NULL);
    }

    if (getcwd(buf, size) != NULL)
    {
        return (buf);
    }
    else
    {
        perror("Erro ao obter o diretório de trabalho atual");
        free(buf);
        return (NULL);
    }
}
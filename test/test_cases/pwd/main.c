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

#include "../../teste.h"

int main(void)
{
    // Simula a lista de argumentos de linha de comando (argc e argv).
    //modelo básico
    int argc = 4;
    char *argv[] = {"program_name", "pwd", "/home/big", NULL};
    

    /**
     * VOCÊ TAMBÉM PODE IMPLEMENTAR UMA MATRIZ DE CASOS DE TESTE.
     * 
     * Basta criar uma matriz de argumentos de linha de comando para testar vários casos.
     * 
     * Cenário 1: Diretório de trabalho vazio. 
     * Cenário 2: Diretório de trabalho correto.
     * Cenário 3: Diretório de trabalho incorreto.
     * Cenário 4: Mais parâmetros do que o normal.
    */
    char *test_cases[][5] = {
        {"program_name", "pwd", NULL,                       NULL},
        {"program_name", "pwd", "/home/big",                NULL,       NULL},
        {"program_name", "pwd", "/diretorio/inexistente",   NULL,       NULL},
        {"program_name", "pwd", "param1",                   "param2",   NULL},
        // Adicione mais casos de teste aqui conforme necessário.
    };

    //modelo básico
    if (strcmp(argv[1], "pwd") == 0) 
    {
        test_pwd_with_home_directory();
        test_pwd_with_root_directory(argc, argv);
        test_pwd_with_error_handling();
        test_pwd_with_null_result();
    }


    //o ideal é que cada função de teste seja chamada em um arquivo separado.
    if (strcmp(argv[1], "ls") == 0) 
    {
    }

    if (strcmp(argv[1], "cd") == 0) 
    {
    }

    return (0);
}

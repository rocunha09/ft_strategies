/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pwd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafade-o <rafade-o@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 00:20:02 by rafade-o          #+#    #+#             */
/*   Updated: 2023/05/26 00:20:04 by rafade-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../teste.h"

/**
 * Função de teste para o caso em que o diretório atual é "/home/usuario".
 * 
 * @param void
 * @return void
 * @test pwd_with_home_directory
 */
void test_pwd_with_home_directory(void)
{
    printf("\n\n-------------------------------------------------------------\n");
    printf(ANSI_COLOR_YELLOW "--- Teste 1 ---\n"ANSI_COLOR_RESET);

    char *expected_result = "/home/usuario";
    char *result = get_pwd();
    if (strcmp(result, expected_result) == 0)
    {
        printf(SUCESS "Diretório atual é \"%s\"\n", result);
    }
    else
    {
        printf(FAIL" Esperado \"%s\", mas obteve \"%s\"\n", expected_result, result);
    }
}

/**
 * Função de teste para lidar com erro ao obter o diretório atual.
 * 
 * @param void
 * @return void
 * @test pwd_with_error_handling
 */
void test_pwd_with_error_handling(void)
{
    printf("\n\n-------------------------------------------------------------\n");
    printf(ANSI_COLOR_YELLOW "--- Teste 2 ---\n"ANSI_COLOR_RESET);

    char *invalid_path = "/caminho/invalido";
    char *error_message = NULL;
    char *result = get_pwd();
    if (result == NULL)
    {
        perror(FAIL "Erro ao obter o diretório atual");
        printf("Mensagem de erro: %s\n", error_message);
    }
    else
    {
        printf(SUCESS "Diretório atual é \"%s\"\n", result);
    }
}

/**
 * Função de teste para o caso em que a função get_pwd retorna NULL (erro simulado).
 * 
 * @param void
 * @return void
 * @test pwd_with_null_result
 */
void test_pwd_with_null_result(void)
{
    printf("\n\n-------------------------------------------------------------\n");
    printf(ANSI_COLOR_YELLOW "--- Teste 3 ---\n"ANSI_COLOR_RESET);

    char *expected_result = NULL;
    char *result = get_pwd();
    if (result == expected_result)
    {
        printf(SUCESS "Diretório atual é NULL (erro simulado)\n");
    }
    else
    {
        printf(FAIL "Esperado NULL, mas obteve \"%s\"\n", result);
    }
}

//  RECEBENDO PARAMS

/**
 * Função de teste para o caso em que o diretório atual é "/".
 * 
 * @param int argc
 * @param char *argv[]
 * 
 * @return void
 * @test pwd_with_root_directory
 */
void test_pwd_with_root_directory(int argc, char *argv[])
{
    printf("\n\n-------------------------------------------------------------\n");
    printf(ANSI_COLOR_YELLOW "--- Teste 4 ---\n"ANSI_COLOR_RESET);

    char *expected_result;

    if (argc >= 3)
    {
        expected_result = "/";
    }
    else
    {
        printf(ANSI_BG_COLOR_RED "erro, não foi passado o caminho do diretório\n" ANSI_BG_COLOR_BLACK);
        return ;
    }

    char *result = get_pwd();
    if (strcmp(result, expected_result) == 0)
    {
        printf(SUCESS "Diretório atual é \"%s\"\n", result);
    }
    else
    {
        printf(FAIL "Esperado \"%s\", mas obteve \"%s\"\n", expected_result, result);
    }
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

//exemplo de importação da lib do seu projeto
//#include "minishell.h"

// Define códigos ANSI para cores.
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_RESET    "\x1b[0m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_BG_COLOR_RED   "\x1b[41m"
#define ANSI_BG_COLOR_BLACK "\x1b[0m"

#define SUCESS  ANSI_COLOR_GREEN "Teste passou:" ANSI_COLOR_RESET 
#define FAIL    ANSI_COLOR_RED "Teste falhou:" ANSI_COLOR_RESET


//example functions
char *get_pwd(void);

//test cases
void test_pwd_with_home_directory(void);
void test_pwd_with_error_handling(void);
void test_pwd_with_null_result(void);
void test_pwd_with_root_directory(int argc, char *argv[]);
#include <stdio.h>

/**
 * com a implementação abaixo posso obter um dado "desconhecido" e determinar seu tipo internamente
 * pode-se por exemplo criar uma função que recebe um ponteiro void e determina seu tipo e chamá-la de typeof
*/
void    ft_generic_param(void *param,  size_t size)
{
    int         *aux_int;
    char        *aux_str;
    char        aux_char;
    
    if (size == sizeof(int))
    {
        aux_int = (int *)param;
        printf("The value is: %d\n", *aux_int);
    }
    else if (size == sizeof(char *))
    {
        aux_str = (char *)param;
        printf("The value is: %s\n", aux_str);
    }
    else if (size == sizeof(char))
    {
        aux_char = *((char *)param);
        printf("The value is: %c\n", aux_char);
    }
    else
        printf("Error: unknown type!\n");
}

/**
 * a ideia surgiu de uma possível necessidade de reúso de código, one eu poderia
 * receber um int ou um double, ou receber como char e realizar atoi internamente se necessário para
 * concluir a operação.
*/
int main(void)
{
    int value;
    char *text;
    char character;

    value = 20;
    text = "test";
    character = 'x';
    ft_generic_param(&value, sizeof(int));
    ft_generic_param(text, sizeof(char *));
    ft_generic_param(&character, sizeof(char));
    return (0);
}

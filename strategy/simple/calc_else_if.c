#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int multi(int a, int b)
{
    return (a * b);
}

int div(int a, int b)
{
    if (b != 0)
        return (a / b);
    else
    {
        printf("Error: division by zero.\n");
        return (0); 
    }
}

int main(void)
{
    int a;
    int b;
    char op;

    a = 10;
    b = 20;
    op = '+';
    if (op =='+')
        printf("the result is: %d\n", sum(a, b));
    else if (op =='-')
        printf("the result is: %d\n", sub(a, b));
    else if (op =='*')
        printf("the result is: %d\n", multi(a, b));
    else if (op =='/')
        printf("the result is: %d\n", div(a, b));
    else
        printf("Error: unknown operator.\n");
    return (0);
}

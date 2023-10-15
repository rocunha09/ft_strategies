
#include "strategy.h"

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

int divi(int a, int b)
{
    if (b != 0)
        return (a / b);
    else
    {
        printf("Error: division by zero.\n");
        return (0); 
    }
}
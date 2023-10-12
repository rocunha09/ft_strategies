#include "schrodinger.h"

int main(void)
{
    int newAge = 20;

    printf("teste: %i\n", get_age());

    set_age(newAge);

    printf("teste: %i\n", get_age());

    return (0);
}

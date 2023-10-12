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

#ifndef TYPES_H

# define TYPES_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_metadata {

    char *name;
    char *describe;
}   t_metadata;

//AGE TYPE
typedef struct age {
    int age;
    t_metadata *metadata;
}   t_age;

# ifndef AGE
#  define AGE "int"
# endif

# ifndef DESC_AGE
#  define DESC_AGE "The age of the person"
# endif

void    destroy_age(void);
char    *get_age_type(void);
char    *get_age_type_describe(void);
int     get_age_value(void);
void	set_age(int new_age);


//another type
//bla bla bla


//CCLEANER  - clean all types with memory allocation
void ccleaner(void);

#endif

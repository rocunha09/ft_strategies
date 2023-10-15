

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct s_operation
{
    char * name;
    int (*function)(int, int);
} t_operation;

typedef struct s_node
{
    t_operation *operation;
    struct t_node *next;
} t_node;

typedef struct s_operation_list
{
    t_node *head;
} t_operation_list;

void add_operation(t_operation_list *list, char *name, \
    int (*function)(int, int));

int exec_operation(t_operation_list *list, char *name, \
    int a, int b);

void free_operations_list(t_operation_list *op_list);

void load_operations(t_operation_list *op_list);
    
int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);
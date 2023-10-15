#include "strategy.h"

void add_operation(t_operation_list *list, char *name, int (*function)(int, int))
{
    t_operation *new_op;
    t_node *new_node;
    t_node *current;

    new_op = (t_operation*)malloc(sizeof(t_operation));
    new_op->name = strdup(name);
    new_op->function = function;
    new_node = (t_node*)malloc(sizeof(t_node));
    new_node->operation = new_op;
    new_node->next = NULL;
    if (list->head == NULL)
    {
        list->head = new_node;
    }
    else
    {
        current = list->head;
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }
}

int exec_operation(t_operation_list *list, char *name, int a, int b)
{
    t_node *current;
    
    current = list->head;
    while (current != NULL)
    {
        if (strcmp(current->operation->name, name) == 0)
            return current->operation->function(a, b);
        current = current->next;
    }
    printf("unknow Operation: %s\n", name);
    return (0); 
}

void free_operations_list(t_operation_list *op_list)
{
    t_node          *current;
    t_node          *next;
    
    current = op_list->head;
    while (current != NULL)
    {
        free(current->operation->name);
        free(current->operation);
        next = current->next;
        free(current);
        current = next;
    }
}

void load_operations(t_operation_list *op_list)
{
    add_operation(op_list, "sum", sum);
    add_operation(op_list, "sub", sub);
    add_operation(op_list, "multi", multi);
    add_operation(op_list, "divi", divi);
}
#include "strategy.h"

int main(void)
{
    t_operation_list op_list;
    t_node          *current;

    op_list.head = NULL;

    load_operations(&op_list);

    printf("result: %d\n", exec_operation(&op_list, "sum", 10, 5));
    printf("result: %d\n", exec_operation(&op_list, "sub", 10, 5));
    printf("result: %d\n", exec_operation(&op_list, "multi", 10, 5));
    printf("result: %d\n", exec_operation(&op_list, "divi", 10, 5));
    free_operations_list(&op_list);
    return (0);
}
#include "push_swap.h"

// ft_sortsize(t_stack *stack)
// {

// }

void sort_over(t_psargs *data)
{
    dep = ft_srtdup()
}

void sort_over6(t_psargs *data, int min, int dep)
{
    if (min < dep)
    {
        while (data->stack_a->next->content != min)
            command_ra(data);
        command_pb(data);
        command_rb(data);
        min = ft_stackmin(data->stack_a);
        sort_over6(data, min, dep);
    }
    command_ra(data);
    command_pa(data);
}
// // int main(int argc, char **argv)
// // {
// //     t_indata *data;
// //     t_stack *a_stack;
// //     t_stack *b_stack;
// //     int count;
// //     check_input(argc, argv);
// //     data = input_ctl(argc, argv);
// //     ft_printf("data OK!!\n\n\n");
// //     a_stack = input_stack(data);
// //     b_stack = ft_stackinit();
// //     count = 1;
// //     a_stack = a_stack->next;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->next;
// //         count++;
// //     }
// //     count--;
// //     ft_printf("a_stack->next OK!!\n\n\n");
// //     a_stack = a_stack->prev;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->prev;
// //         count--;
// //     }
// //     ft_printf("a_stack->prev OK!!\n\n\n");
// //     ft_printf("====================\n\n\n");
// //     sort_over6(a_stack,b_stack,data, ft_stackmin(a_stack), ft_stackmedian(a_stack));
// //     a_stack = a_stack->next;
// //     count = 1;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->next;
// //         count++;
// //     }
// //     count--;
// //     ft_printf("a_stack->next OK!!\n\n\n");
// //     a_stack = a_stack->prev;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->prev;
// //         count--;
// //     }
// //     ft_printf("a_stack->prev OK!!\n");
// //     exit(0);
// // }
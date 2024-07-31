#include "push_swap.h"

int main(int argc, char **argv)
{
    if (argc < 3 || argc > ARG_MAX)
        exit(ft_error());
    else
        push_swap(argc, argv);
    return (0);
}
// int main(int argc, char **argv)
// {
//     t_psargs *data;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     data->stack_a = ft_stackinput(data);
//     data->stack_b = ft_stackinit();
//     data->ans = ft_stackinit();
//     count = 0;
//     data->stack_a = data->stack_a->next;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->next;
//         count++;
//     }
//     ft_printf("data->stack_a->next OK!!\n\n\n");
//     data->stack_a = data->stack_a->prev;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count--;
//     }
//     ft_printf("data->stack_a->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     data->stack_a = ft_stackcompress(data->stack_a);
//     data->stack_a = data->stack_a->next;
//     count = 0;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->next;
//         count++;
//     }
//     ft_printf("data->stack_a->next OK!!\n\n\n");
//     data->stack_a = data->stack_a->prev;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count--;
//     }
//     ft_printf("data->stack_a->prev OK!!\n");
//     data->ans = data->ans->next;
//     count = 0;
//     while (data->ans->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->ans->content);
//         data->ans = data->ans->next;
//         count++;
//     }
//     ft_printf("data->ans->next OK!!\n\n\n");
//     exit(0);
// }
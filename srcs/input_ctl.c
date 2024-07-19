#include "push_swap.h"

void    check_dup(int *buf, int num, int size)
{
    int index;

    index = 0;
    while (index < size)
    {
        if (buf[index] == num)
            exit(ft_error());
        index++;
    }
}

t_args *input_ctl(int argc, char **argv)
{
    t_args  *data;
    int     index;
    int     size;
    int     num;
    int     i;

    data = (t_args *)malloc(sizeof(t_args));
    if (!data)
        exit(ft_error());
    size = argc - 1;
    data->buf = (int *)malloc(sizeof(int) * (size));
    if (!data->buf)
        exit(ft_error());
    index = 0;
    while (index < size)
    {
        num = ft_atoi(argv[index + 1]);
        check_dup(data->buf, num, index);
        data->buf[index] = num;
        index++;
    }
    return (data);
}
// int main(int argc, char **argv)
// {
//     t_indata *input_dt;
//     int index;
//     int i;

//     if (argc < 2)
//         exit(ft_error());
//     input_dt = input_ctl(argc, argv);
//     ft_printf("size:%d\n", input_dt->size);
//     index = 0;
//     while (index < input_dt->size)
//     {
//         ft_printf("%d: %d\n", index,input_dt->buf[index]);
//         index++;
//     }
//     ft_printf("OK\n");
//     free(input_dt->buf);
//     free(input_dt);
//     return(0);
// }
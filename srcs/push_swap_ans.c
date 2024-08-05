#include "push_swap.h"

void    change_ans(t_stack *ans)
{
    if (ans->content == 1 || ans->content == 2)
        ans->content = 3;
    if (ans->content == 6 || ans->content == 7)
        ans->content = 8;
    if (ans->content == 9 || ans->content == 10)
        ans->content = 11;
}

int ft_isoptimization(t_stack *ans)
{
    if (ans->content == 1)
        return (ans->next->content == 2);
    else if (ans->content == 2)
        return (ans->next->content == 1);
    else if (ans->content == 6)
        return (ans->next->content == 7);
    else if (ans->content == 7)
        return (ans->next->content == 6);
    else if (ans->content == 9)
        return (ans->next->content == 10);
    else if (ans->content == 10)
        return (ans->next->content == 9);
    else
        return (0);
}

void    display_ans(int choice)
{
    if (choice == 1)
        ft_printf("sa\n");
    else if (choice == 2)
        ft_printf("sb\n");
    else if (choice == 3)
        ft_printf("ss\n");
    else if (choice == 4)
        ft_printf("pa\n");
    else if (choice == 5)
        ft_printf("pb\n");
    else if (choice == 6)
        ft_printf("ra\n");
    else if (choice == 7)
        ft_printf("rb\n");
    else if (choice == 8)
        ft_printf("rr\n");
    else if (choice == 9)
        ft_printf("rra\n");
    else if (choice == 10)
        ft_printf("rrb\n");
    else if (choice == 11)
        ft_printf("rrr\n");
}

void    push_swap_ans(t_stack *ans)
{
    if (ans->next->sentinel == 1)
        exit(ft_error());
    ans = ans->next;
    while (ans->sentinel != 1)
    {
        if (ans->next->sentinel != 1)
        {
            if (ft_isoptimization(ans))
            {
                ans = ans->next;
                change_ans(ans);
            }
        }
        display_ans(ans->content);
        ans = ans->next;
    }
}
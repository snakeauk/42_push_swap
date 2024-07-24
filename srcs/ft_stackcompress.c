#include "push_swap.h"

t_stack *ft_stackcompress(t_stack *stack)
{
    t_stack *new;
    t_stack *next;
    int     rank;

    new = ft_stackinit();
    next = stack->next;
    while (next->sentinel != 1)
    {
        rank = ft_starkrank(stack, next->content);
        ft_stackadd_back(new, ft_stacknew(rank));
        next = next->next;
    }
    return (new);
}
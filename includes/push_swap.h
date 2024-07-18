#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
    int     content;
    int     sentinel;
    t_stack *prev;
    t_stack *next;
}           t_stack;

typedef struct s_args
{
	char	*ans;
	int		*buf;
    t_stack *stack_a;
    t_stack *stack_b;
}			t_args;


#endif
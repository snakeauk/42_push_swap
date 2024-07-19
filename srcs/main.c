#include "push_swap.h"

int main(int argc, char **argv)
{
    if (argc < 3 || argc > ARG_MAX)
        exit(ft_error());
    else
        push_swap(argc, argv);
    return (0);
}
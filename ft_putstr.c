#include "libft.h"

void    ft_putstr(char *str, int *c)
{
    if (!str)
        return ;
    ft_putchar((str++), &c);
}

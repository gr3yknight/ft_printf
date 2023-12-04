#include "libft.h"

void ft_putchar(char ch, int *c)
{
    write(1, &ch, 1);
    (*c)++;
}
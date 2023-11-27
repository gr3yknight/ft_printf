#include "libft.h"

int ft_unsigned(unsigned long nb, int base)
{
    if (nb >= 10)
	    ft_putnbr(nb, 10);
    return(ft_putchar(nb % 10 + '0'));
}
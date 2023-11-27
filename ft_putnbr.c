#include "libft.h"

int ft_putnbr(long nb, int base)
{
	int     counter;
    char    *src;

    counter = 0;
    src = "0123456789abcdef";
    if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb, 10);
	ft_putchar(nb % 10 + '0');

}

#include "ft_printf.h"

void ft_putnbr(long nb, int *c)
{

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', c);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, c);
	ft_putchar(nb % 10 + '0', c);
}

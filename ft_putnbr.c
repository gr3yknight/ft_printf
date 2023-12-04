#include "libft.h"

int ft_putnbr(long nb)
{
	static int	c;

	c = 0;
	if (nb < 0)
	{
		nb *= -1;
		c += ft_putchar('-');
	}
	if (nb >= 10)
		c += ft_putnbr(nb / 10);
	return (c += ft_putchar(nb % 10 + '0'));
}

#include "libft.h"

int ft_putnbr(long nb)
{
	static int	c;

	c = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	return (c += ft_putchar(nb % 10 + '0'));
}

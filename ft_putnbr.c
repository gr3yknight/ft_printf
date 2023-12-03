#include "libft.h"

int ft_putnbr(long nb)
{
    if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	return (ft_putchar(nb % 10 + '0'));
}

int main()
{
	int k = ft_putnbr(9541);
	printf("\n%d\n", k);
	int j = putnbr(9541);
	printf("\n%d\n", j);

}
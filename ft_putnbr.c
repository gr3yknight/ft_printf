#include "ft_printf.h"

void	ft_putnbr(long nb, int *c)
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

// int main()
// {
// 	int n = -98256;
// 	int c = 0;
// 	ft_putnbr(n, &c);
// 	printf("\n");
// 	printf("%d", c);
// 	printf("\n");
// 	int j = printf("%d", n);
// 	printf("\n");
// 	printf("%d", j);
// }

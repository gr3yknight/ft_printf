#include "libft.h"

int ft_unsigned(unsigned long nb)
{
	static int  c;

	c = 0;
	c += ft_putnbr(nb);
	return (c);
}

int main()
{
	unsigned int nb = -19;
	int j = ft_unsigned(nb);
	printf("\n");
	int k = printf("%u", nb);
	printf("\n");
	printf("%d", j);
	printf("\n");
	printf("%d", k);
}
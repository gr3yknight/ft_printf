#include "ft_printf.h"

int ft_putptr(unsigned long l)
{
	int c;

	c = 0;
	if (l >= 16)
		ft_putptr(l / 16);
	c += ft_putchar("0123456789abcdef"[l % 16]);
	return (c);
}

int main()
{
	char *str = "Hello";
	int k = ft_putptr((unsigned long)str);
	printf("\n%p\n", str);
	printf("\n%i\n", k);
}
#include "ft_printf.h"

void ft_putptr(unsigned long l, int *c)
{
	write(1, "0x", 2);
	if (l >= 16)
		ft_puthex(l / 16, c);
	ft_putchar("0123456789abcdef"[l % 16], c);
}

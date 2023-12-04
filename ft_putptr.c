#include "ft_printf.h"

void ft_putptr(unsigned long l, int *c)
{
	ft_putstr("0x", c);
	if (l >= 16)
		ft_puthex(l / 16, c);
	ft_putchar("0123456789abcdef"[l % 16], c);
}

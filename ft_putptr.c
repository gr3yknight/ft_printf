#include "ft_printf.h"

int ft_putptr(unsigned long l)
{
	static int	c;

	c = 0;
	c += write(1, "0x", 2);
	if (l >= 16)
		c += ft_puthex(l / 16);
	return (c += ft_putchar("0123456789abcdef"[l % 16]));
}

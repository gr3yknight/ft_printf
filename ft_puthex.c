#include "ft_printf.h"

int ft_puthex(unsigned long l)
{
	static int  c;

    c = 0;
    if (l >= 16)
		ft_puthex(l / 16);
	return (c += ft_putchar("0123456789abcdef"[l % 16]));
}

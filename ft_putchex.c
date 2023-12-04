#include "ft_printf.h"

void ft_putchex(unsigned long l, int *c)
{
	if (l >= 16)
		ft_putchex(l / 16, c);
	return (ft_putchar("0123456789ABCDEF"[l % 16], c));
}

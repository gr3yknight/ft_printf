#include "ft_printf.h"

void	ft_puthex(unsigned int l, int *c)
{
	if (l >= 16)
		ft_puthex(l / 16, c);
	ft_putchar("0123456789abcdef"[l % 16], c);
}

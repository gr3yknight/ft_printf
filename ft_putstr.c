#include "ft_printf.h"

void	ft_putstr(char *str, int *c)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putchar(*str, c);
		str++;
	}
}


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int     ft_printf(char const *str, ...);

int		ft_putnbr(long nb);
int     ft_putchar(char c);
int     ft_putstr(char *str);
int		ft_putptr(unsigned long l);
int		ft_spf(char spf, va_list args);


#endif 
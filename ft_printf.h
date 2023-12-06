
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int	ft_printf(char const *str, ...);

void    ft_spf(char spf, va_list args, int *l);
void    ft_unsigned(unsigned int nb, int *c);
void    ft_putchex(unsigned int l, int *c);
void    ft_puthex(unsigned int l, int *c);
void    ft_putptr(unsigned long l, int *c);
void    ft_putstr(char *str, int *c);
void    ft_putchar(char ch, int *c);
void    ft_putnbr(long nb, int *c);


#endif 
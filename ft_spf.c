

#include "ft_printf.h"

int ft_spf(char spf, va_list args)
{
    int counter;

    counter = 0;
    if (spf == 's')
        counter += ft_putstr(va_arg(args, char *));
    else if (spf == 'c')
        counter += ft_putchar(va_arg(args, int));
    else if (spf == 'd')
        counter += ft_putnbr(va_arg(args, int));
    else if (spf == 'i')
        counter += ft_putnbr(va_arg(args, int));
    else if (spf == 'u')
        counter += ft_unsigned(va_arg(args, unsigned int));
    else if (spf == 'x')
        counter += ft_puthex(va_arg(args, int));
    else if (spf == 'X')
        counter += ft_putchex(va_arg(args, int));
    else if (spf == 'p')
        counter += ft_putptr(va_arg(args, int));
    else
        counter += write(1, &spf, 1);
    return (counter);
}
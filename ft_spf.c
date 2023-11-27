

#include "ft_printf.h"

int ft_spf(char spf, va_list args)
{
    int counter;

    counter = 0;
    // while (*s)
    // {
    //     if (*s == '%' && *(++s) == '%')
    //         l += ft_putchar('%');
    //     else if (*s == '%' && *(++s) == 'i')
    //         l = va_arg(args, int);
    //     else if (*s == '%' && *(++s) == 'd')
    //         l = va_arg(args, long);
    //     else if (*s == '%' && *(++s) == 's')
    //         l = va_arg(args, char *);
    //     else if (*s == '%' && *(++s) == 'c')
    //         l = (va_arg(args, int), 10);
    //     else if (*s == '%' && *(++s) == 'x')
    //         l = (va_arg(args, unsigned int), 10);
    //     else if (*s == '%' && *(++s) == 'u')
    //         l = (va_arg(args, unsigned int), 16);
    //     else if (*s == '%' && *(++s) == 'p')
    //         l = va_arg(args, void *);
    //     s++;
    // }
    if (spf == 's')
        counter += ft_putstr(va_arg(args, char *));
    else if (spf == 'c')
        counter += ft_putchar(va_arg(args, int));
    else if (spf == 'd')
        counter += ft_putnbr(va_arg(args, int), 10);
    else if (spf == 'i')
        counter += ft_putnbr(va_arg(args, int), 10);
    else if (spf == 'u')
        counter += ft_unsigned(va_arg(args, unsigned int), 10);
    else if (spf == 'x')
        counter += ft_putptr(va_arg(args, int), 16);
    else if (spf == 'X')
        counter += ft_putptr(va_arg(args, int), 16);
    else if (spf == 'p')
        counter += ft_putptr(va_arg(args, int));
    else
        counter += write(1, &spf, 1);
    return (counter);
}
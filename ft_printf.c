
#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		l;
	char	*s;

	s = (char *)str;
	l = 0;
	va_list(args);
	va_start(args, str);
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			ft_spf(*(s + 1), args, &l);
			s++;
		}
		else if (*s != '%')
			ft_putchar(*s, &l);
		s++;
	}
	va_end(args);
	return (l);
}

int main()
{
	char *s = "Hello everyone";
	ft_printf("%p\n%s", s, s);
	printf("\n");
}
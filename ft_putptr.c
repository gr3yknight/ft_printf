#include "ft_printf.h"

int ft_putptr(unsigned long l)
{
	// static char *s;
	static int	c;

	// s = "0x";
	c = 0;
	// write(1, s, ft_strlen(s));
	c += write(1, "0x", 2);
	if (l >= 16)
		c += ft_puthex(l / 16);
	return (c += ft_putchar("0123456789abcdef"[l % 16]));
}

int main()
{
    char *s = NULL;
    int c = ft_putptr((unsigned long) s);
    printf("\n");
    int r = printf("%p", s);
    printf("\n");
    printf("The function printed %d characters", c);
    printf("\n");
    printf("This how many characters it should count %d", r);
}
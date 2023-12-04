#include "ft_printf.h"

void    ft_putstr(char *str, int *c)
{
    if (!str)
        return ;
    while (*str)
    {
        ft_putchar(*str, c);
        str++;
    }
}

int main()
{
	char s[] = "Hello everyone";
	int c = 0;
	ft_putstr(s, &c);
	printf("\n");
	printf("%d", c);
	printf("\n");
	int j = printf("%s", s);
	printf("\n");
	printf("%d", j);
}

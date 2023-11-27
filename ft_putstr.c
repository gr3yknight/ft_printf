#include "libft.h"

int    ft_putstr(char *str)
{
    if (!str)
        return (0);
    return (write(1, str, ft_strlen(str)));
}

int main()
{
    char *str = "Hello everyone";
    printf("%p\n", str);
}
#include "libft.h"

int ft_unsigned(unsigned int nb)
{
	static int  c;

	c = 0;
	c += ft_putnbr(nb);
	return (c);
}

// int main()
// {
// 	unsigned int nb = INT_MAX + 1;
// 	ft_unsigned(nb);
// 	printf("\n");
// 	// printf("my return value :[%d]\n", j);
// 	// printf("%u\n", nb);
// 	// printf("original return value :[%d]\n", k);
// }
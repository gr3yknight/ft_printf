/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pc_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:55:24 by talhaoui          #+#    #+#             */
/*   Updated: 2023/11/24 11:55:24 by talhaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
	int     l;
	char    *s;

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
// #include <limits.h>

// int main(){

// 	printf("%i", printf(" %d ", 0));
// 	printf("%i", printf(" %d ", -1));
// 	printf("%i", printf(" %d ", 1));
// 	printf("%i", printf(" %d ", 9));
// 	printf("%i", printf(" %d ", 10));
// 	printf("%i", printf(" %d ", 11));
// 	printf("%i", printf(" %d ", 15));
// 	printf("%i", printf(" %d ", 16));
// 	printf("%i", printf(" %d ", 17));
// 	printf("%i", printf(" %d ", 99));
// 	printf("%i", printf(" %d ", 100));
// 	printf("%i", printf(" %d ", 101));
// 	printf("%i", printf(" %d ", -9));
// 	printf("%i", printf(" %d ", -10));
// 	printf("%i", printf(" %d ", -11));
// 	printf("%i", printf(" %d ", -14));
// 	printf("%i", printf(" %d ", -15));
// 	printf("%i", printf(" %d ", -16));
// 	printf("%i", printf(" %d ", -99));
// 	printf("%i", printf(" %d ", -100));
// 	printf("%i", printf(" %d ", -101));
// 	printf("%i", printf(" %d ", INT_MAX));
// 	printf("%i", printf(" %d ", INT_MIN));
// 	printf("%i", printf(" %d ", LONG_MAX));
// 	printf("%i", printf(" %d ", LONG_MIN));
// 	printf("%i", printf(" %d ", UINT_MAX));
// 	printf("%i", printf(" %d ", ULONG_MAX));
// 	printf("%i", printf(" %d ", 9223372036854775807LL));
// 	printf("%i", printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
// }

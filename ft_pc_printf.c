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
		if (*s == '%')
			l += (va_arg(args, int));
		else if (*s == '%' && *(++s) == 'i')
			l += va_arg(args, int);
		else if (*s == '%' && *(++s) == 'd')
			l = va_arg(args, long);
		else if (*s == '%' && *(++s) == 's')
			l = va_arg(args, char *);
		else if (*s == '%' && *(++s) == 'c')
			l = (va_arg(args, int), 10);
		else if (*s == '%' && *(++s) == 'x')
			l = (va_arg(args, unsigned int), 10);
		else if (*s == '%' && *(++s) == 'u')
			l = (va_arg(args, unsigned int), 16);
		else if (*s == '%' && *(++s) == 'p')
			l = va_arg(args, void *);
		s++;
	}
	va_end(args);
	return (l);
}
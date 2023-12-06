/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:25:06 by hatalhao          #+#    #+#             */
/*   Updated: 2023/12/06 14:51:46 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		l;
	char	*s;
	va_list	args;

	s = (char *)str;
	l = 0;
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

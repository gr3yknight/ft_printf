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
	int		*c;

	s = (char *)str;
	l = 0;
	va_list(args);
	va_start(args, str);
	while (*s)
	{
		if (*s == '%')
			l += ft_spf(*(++s), args);

	}
	va_end(args);
	return (l);
}
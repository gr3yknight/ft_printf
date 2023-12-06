/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalhao <hatalhao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:26:09 by hatalhao          #+#    #+#             */
/*   Updated: 2023/12/06 14:33:57 by hatalhao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nb, int *c)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', c);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, c);
	ft_putchar(nb % 10 + '0', c);
}

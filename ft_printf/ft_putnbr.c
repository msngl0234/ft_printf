/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:00:38 by msengul           #+#    #+#             */
/*   Updated: 2024/11/25 18:09:50 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			count += write(1, "-2147483648", 11);
			if (count == -1)
				return (-1);
			return (count);
		}
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	if (ft_putchar((nb % 10) + '0') == -1)
		return (-1);
	count++;
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:53:29 by msengul           #+#    #+#             */
/*   Updated: 2024/11/24 14:40:02 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count = ft_puthex(n / 16, c);
		if (count == -1)
			return (-1);
	}
	if (c == 'x')
	{
		if (ft_putchar("0123456789abcdef"[n % 16]) == -1)
			return (-1);
	}
	if (c == 'X')
	{
		if (ft_putchar("0123456789ABCDEF"[n % 16]) == -1)
			return (-1);
	}
	return (count + 1);
}

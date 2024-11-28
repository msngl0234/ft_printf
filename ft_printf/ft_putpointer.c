/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:25:03 by msengul           #+#    #+#             */
/*   Updated: 2024/11/25 18:10:18 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int	ft_puthex_lower(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_puthex_lower(nbr / 16);
		if (count == -1)
			return (-1);
	}
	if (ft_putchar("0123456789abcdef"[nbr % 16]) == -1)
		return (-1);
	return (count + 1);
}

int	ft_putpointer(void *p)
{
	unsigned long	ptr;
	int				count;

	ptr = (unsigned long)p;
	count = 0;
	if (p == NULL)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	count += write(1, "0x", 2);
	if (count == -1)
		return (-1);
	count += ft_puthex_lower(ptr);
	if (count == -1)
		return (-1);
	return (count);
}

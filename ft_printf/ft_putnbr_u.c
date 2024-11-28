/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:43:44 by msengul           #+#    #+#             */
/*   Updated: 2024/11/25 13:42:10 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbu)
{
	unsigned int	count;

	count = 0;
	if (nbu >= 10)
		count += ft_putnbr_u(nbu / 10);
	if (ft_putchar((nbu % 10) + '0') == -1)
		return (-1);
	count++;
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:34:30 by msengul           #+#    #+#             */
/*   Updated: 2024/11/27 16:55:10 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

static int	ft_check_format(va_list args, const char *format, int count)
{
	int	temp;

	temp = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			temp = ft_format(args, *(++format));
			if (temp == -1)
				return (-1);
			count += temp;
		}
		else if (*format != '%')
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			count++;
		}
		else
			return (-1);
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	count = ft_check_format(args, format, count);
	va_end(args);
	return (count);
}

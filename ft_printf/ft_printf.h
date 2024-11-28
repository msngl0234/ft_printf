/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul < msengul@student.42kocaeli.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:54:12 by msengul           #+#    #+#             */
/*   Updated: 2024/11/26 12:42:18 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	ft_putnbr_u(unsigned int nbu);
int	ft_putpointer(void *p);
int	ft_puthex(unsigned int n, char c);

#endif

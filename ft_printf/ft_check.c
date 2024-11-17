/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:27:05 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/17 13:58:37 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check(const char *str, va_list *arg)
{
	int i;

	i = 0;
	if (str[i] == 'c')
		return (ft_putchar(va_arg(*arg, int)));
	else if (str[i] == 's')
		return (ft_putstr(va_arg(*arg, char *)));
	else if (str[i] == 'p')
	{
		ft_putstr("0x");
		return (ft_putnbr_base_of_p((unsigned long)va_arg(*arg, void *),
			"0123456789abcdef"));
	}
	else if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(*arg, int)));
	else if (str[i] == 'u')
		return (ft_putnbr(va_arg(*arg, unsigned int)));
	else if (str[i] == 'x')
		return (ft_putnbr_base_of_xs(va_arg(*arg, int), "0123456789abcdef"));
	else if (str[i] == 'X')
		return (ft_putnbr_base_of_xs(va_arg(*arg, int), "0123456789ABCDEF"));
	else if (str[i] == '%')
		return (ft_putchar(str[i]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:21 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/17 14:26:31 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	int j;
	int	k;
	va_list args;
	
	i = 0;
	j = 0;
	k = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			k += ft_check(&str[i + 1], &args);
			i++;
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (j + k);
}

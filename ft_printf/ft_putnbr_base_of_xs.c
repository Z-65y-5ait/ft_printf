/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_of_xs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:22:11 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/17 13:55:17 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_nbrx(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
        return 1;
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	ft_putnbr_base_of_xs(unsigned int nbr, char *base)
{
	int	i;
	
	i = ft_strlen_nbrx(nbr);
	if (nbr >= 16)
		ft_putnbr_base_of_xs(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	return (i);
}

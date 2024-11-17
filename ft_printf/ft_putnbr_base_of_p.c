/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_of_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:41:12 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/17 13:58:50 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_nbrp(unsigned long n)
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

int	ft_putnbr_base_of_p(unsigned long nbr, char *base)
{
	int	i;
	
    i = ft_strlen_nbrp(nbr);
    if (nbr >= 16)
		ft_putnbr_base_of_p(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	return (i + 2);
}

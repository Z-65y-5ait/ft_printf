/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:17:21 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/19 17:30:21 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *arg, ...);
int		ft_putchar(char c);
int		ft_check(const char *str, va_list *arg);
int		ft_putstr(char *s);
int		ft_putnbr(long n);
size_t	ft_strlen(const char *str);
int		ft_putnbr_base_of_xs(unsigned int nbr, char *base);
int		ft_putnbr_base_of_p(unsigned long nbr, char *base);
char	*ft_strchr(const char *s, int c);

#endif
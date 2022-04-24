/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:32:22 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 20:05:44 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flag_c(va_list a, int *p)
{
	char	output;

	output = (char)va_arg(a, int);
	*p = *p + 1;
	ft_putchar(output);
}

void	flag_s(va_list a, int *p)
{
	char	*str_out;

	str_out = va_arg(a, char *);
	if (str_out != NULL)
		ft_putstrf(str_out, p);
	else
	{
		*p = *p + 6;
		write(1, "(null)", 6);
	}
}

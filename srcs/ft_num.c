/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:38:26 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 20:08:09 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flag_int(va_list a, int *p)
{
	int	output;

	output = va_arg(a, int);
	ft_putnbrf(output, p);
}

void	flag_unt(va_list a, int *p)
{
	unsigned int	output;

	output = va_arg(a, unsigned int);
	ft_putunsignf(output, p);
}

void	flag_oct(va_list a, int *p)
{
	unsigned int	output;

	output = va_arg(a, int);
	ft_putoctal(output, p);
}

void	flag_hex(va_list a, int *p)
{
	unsigned int	output;

	output = va_arg(a, unsigned int);
	ft_puthexa(output, p);
}

void	flag_hexm(va_list a, int *p)
{
	unsigned int	output;

	output = va_arg(a, unsigned int);
	ft_puthexam(output, p);
}

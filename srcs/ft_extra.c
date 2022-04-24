/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:53:22 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/22 11:13:35 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flag_per(int *p)
{
	char	output;

	output = '%';
	*p = *p + 1;
	write(1, &output, 1);
}

void	flag_vo(va_list a, int *p)
{
	void			*output;
	unsigned long	addr;

	output = va_arg(a, void *);
	addr = (unsigned long)output;
	write(1, "0x", 2);
	*p = *p + 2;
	ft_putaddr(addr, p);
}

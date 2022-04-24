/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:20:01 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 14:20:32 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putchar_unsigned(int *p, unsigned int nbr)
{
	char	c;

	c = nbr;
	write (1, &c, 1);
	*p = *p + 1;
}

void	ft_putunsignf(unsigned int n, int *p)
{
	unsigned int		nbr;
	unsigned int		tmp1;

	nbr = n / 10;
	tmp1 = n % 10;
	if (nbr > 9)
		ft_putnbrf(nbr, p);
	else if (nbr > 0)
		putchar_unsigned(p, (nbr + '0'));
	putchar_unsigned(p, (tmp1 + '0'));
}

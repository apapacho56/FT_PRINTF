/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:23:33 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 14:19:37 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putchar_oct(int *p, unsigned int nbr)
{
	char	c;

	c = nbr;
	write (1, &c, 1);
	*p = *p + 1;
}

void	ft_putoctal(unsigned int n, int *p)
{
	unsigned int		nbr;
	unsigned int		tmp1;

	tmp1 = n % 8;
	nbr = n / 8;
	if (nbr > 7)
		ft_putoctal(nbr, p);
	else if (nbr > 0)
		putchar_oct(p, (nbr + '0'));
	putchar_oct(p, (tmp1 + '0'));
}

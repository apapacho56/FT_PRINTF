/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:45:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/20 16:27:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putchar_int(int *p, int nbr)
{
	char	c;

	c = nbr;
	write (1, &c, 1);
	*p = *p + 1;
}

void	ft_putnbrf(int n, int *p)
{
	int		nbr;
	int		tmp1;

	if (n == -2147483648)
		ft_putstrf("-2147483648", p);
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			putchar_int(p, '-');
		}
		nbr = n / 10;
		tmp1 = n % 10;
		if (nbr > 9)
			ft_putnbrf(nbr, p);
		else if (nbr > 0)
		{
			putchar_int(p, (nbr + '0'));
		}
		putchar_int(p, (tmp1 + '0'));
	}
}

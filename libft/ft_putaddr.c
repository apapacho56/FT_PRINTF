/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:23:33 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 14:13:48 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	hex_flag(int *p, unsigned long c, char *s)
{
	if (c == 10)
		write (1, &s[0], 1);
	else if (c == 11)
		write (1, &s[1], 1);
	else if (c == 12)
		write (1, &s[2], 1);
	else if (c == 13)
		write (1, &s[3], 1);
	else if (c == 14)
		write (1, &s[4], 1);
	else if (c == 15)
		write (1, &s[5], 1);
	*p = *p + 1;
}

static void	putchar_add(int *p, unsigned long nbr)
{
	char			*s;
	unsigned long	c;

	s = "abcdef";
	c = nbr;
	if (c >= 0 && c <= 9)
	{
		c = c + '0';
		write (1, &c, 1);
		*p = *p + 1;
	}
	else
		hex_flag(p, c, s);
}

void	ft_putaddr(unsigned long n, int *p)
{
	unsigned long	nbr;
	unsigned long	tmp1;

	nbr = n / 16;
	tmp1 = n % 16;
	if (nbr > 15)
		ft_putaddr(nbr, p);
	else if (nbr > 0)
		putchar_add(p, (nbr));
	putchar_add(p, (tmp1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:23:33 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 14:37:46 by aparedes         ###   ########.fr       */
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

static void	putchar_hex(int *p, unsigned int nbr)
{
	char			*s;
	unsigned int	c;

	s = "ABCDEF";
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

void	ft_puthexam(unsigned int n, int *p)
{
	unsigned int	nbr;
	unsigned int	tmp1;

	nbr = n / 16;
	tmp1 = n % 16;
	if (nbr > 15)
		ft_puthexam(nbr, p);
	else if (nbr > 0)
		putchar_hex(p, (nbr));
	putchar_hex(p, (tmp1));
}

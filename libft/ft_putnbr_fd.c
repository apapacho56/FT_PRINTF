/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:23:59 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/20 14:28:57 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putchar_int(int fd, int nbr)
{
	char	c;

	c = nbr;
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		nbr;
	int		tmp1;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			putchar_int(fd, '-');
		}
		nbr = n / 10;
		tmp1 = n % 10;
		if (nbr > 9)
			ft_putnbr_fd(nbr, fd);
		else if (nbr > 0)
		{
			putchar_int(fd, (nbr + '0'));
		}
		putchar_int(fd, (tmp1 + '0'));
	}
}

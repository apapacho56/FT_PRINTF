/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:01:17 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/17 12:21:57 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tam(long n)
{
	size_t	tam;
	int		neg;

	tam = 0;
	neg = 0;
	if (n < 0)
	{
		tam++;
		neg++;
		n = -n;
	}
	while (n >= 1)
	{
		tam++;
		n /= 10;
	}
	return (tam);
}

static char	*tam_buf(char *buffer, long nbr, int len, int neg)
{
	if (nbr != 0)
		buffer = malloc(sizeof(char) * (len + 1));
	else
		return (buffer = ft_strdup("0"));
	if (!buffer)
		return (0);
	neg = 0;
	if (nbr < 0)
	{
		neg++;
		nbr = -nbr;
	}
	buffer[len] = '\0';
	while (--len)
	{
		buffer[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg == 1)
		buffer[0] = '-';
	else
		buffer[0] = (nbr % 10) + '0';
	return (buffer);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*buffer;
	long	nbr;
	int		neg;

	nbr = n;
	len = tam(nbr);
	buffer = 0;
	neg = 0;
	buffer = tam_buf(buffer, nbr, len, neg);
	if (!(buffer))
		return (0);
	return (buffer);
}

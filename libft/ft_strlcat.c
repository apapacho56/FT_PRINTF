/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:08:08 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 15:17:25 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *buffer, const char *dst, size_t dstsize)
{
	size_t	counter;
	size_t	len;
	size_t	offset;

	len = ft_strlen(buffer);
	counter = len;
	offset = 0;
	if (dstsize != 0)
	{
		while (counter < dstsize - 1 && offset < ft_strlen(dst))
		{
			buffer[counter] = dst[offset];
			counter++;
			offset++;
		}
		if (len < dstsize)
			buffer[counter] = '\0';
	}
	if (dstsize > len)
		return (len + ft_strlen(dst));
	return (dstsize + ft_strlen(dst));
}

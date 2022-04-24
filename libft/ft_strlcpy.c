/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:03:19 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/06 15:49:00 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c1;
	size_t	len;

	c1 = 0;
	len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (len);
	while (src[c1] != '\0' && c1 < dstsize - 1)
	{
		dst[c1] = src[c1];
		c1++;
	}
	if (dstsize < len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[c1] = '\0';
	return (len);
}

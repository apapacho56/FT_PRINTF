/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:09:52 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 16:17:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	counter = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		counter = len - 1;
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter--;
		}
	}
	else
	{
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	return (dst);
}

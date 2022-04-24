/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:08:08 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/06 15:33:59 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*assign_str;
	size_t	c1;

	c1 = 0;
	assign_str = (char *)str;
	while (c1 < n)
	{
		if (assign_str[c1] == (char)c)
		{
			return (assign_str + c1);
		}
		c1++;
	}
	return (0);
}

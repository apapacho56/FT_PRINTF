/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:43:12 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 16:17:15 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;

	counter = 0;
	while (counter < (int)ft_strlen(s) + 1)
	{
		if (*(s + counter) == (char)c)
			return ((char *)s + counter);
		counter ++;
	}
	return (NULL);
}

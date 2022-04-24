/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:38:11 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 19:31:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	size_t	c2;
	size_t	c1;

	if (!s1 || !s2)
		return (0);
	c2 = 0;
	c1 = 0;
	buffer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1));
	if (!buffer)
		return (0);
	while (s1[c1] != '\0')
	{
		buffer[c1] = s1[c1];
		c1++;
	}
	while (s2[c2] != '\0')
	{
		buffer[c1] = s2[c2];
		c1++;
		c2++;
	}
	buffer[c1] = '\0';
	return (buffer);
}

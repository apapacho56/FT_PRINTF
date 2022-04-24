/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:25:57 by counter2ram       #+#    #+#             */
/*   Updated: 2022/04/08 11:55:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*start;

	start = s;
	len = ft_strlen(s);
	s = (s + len);
	while (s != start && c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

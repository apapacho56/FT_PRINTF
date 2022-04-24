/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:55:46 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/06 14:51:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c1;

	c1 = 0;
	if (n == 0)
		return (0);
	while (c1 < n - 1 && s1[c1] != '\0'
		&& s2[c1] != '\0'
		&& s1[c1] == s2[c1])
		c1 ++;
	return ((unsigned char)s1[c1] - (unsigned char)s2[c1]);
}

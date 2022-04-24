/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 03:51:36 by jrameau           #+#    #+#             */
/*   Updated: 2022/04/08 11:11:04 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		c1;

	c1 = 0;
	while (*(s1 + c1) && *(s1 + c1) == *(s2 + c1))
		c1++;
	return (*((unsigned char *)s1 + c1) - *((unsigned char *)s2 + c1));
}

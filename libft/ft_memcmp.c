/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:59:32 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 18:49:17 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*assign_s1;
	unsigned char	*assign_s2;
	int				counter;

	assign_s1 = (unsigned char *)s1;
	assign_s2 = (unsigned char *)s2;
	counter = 0;
	while (counter < (int)n - 1 && assign_s1[counter] == assign_s2[counter])
		counter++;
	if (counter == (int)n)
		return (0);
	return (assign_s1[counter] - assign_s2[counter]);
}

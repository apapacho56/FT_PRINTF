/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/16 21:00:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (size > (SIZE_MAX / count))
		return (NULL);
	temp = malloc(count * size);
	if (temp != 0)
		ft_memset(temp, 0, count * size);
	return (temp);
}

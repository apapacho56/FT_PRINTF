/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:04:38 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 19:33:05 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	count;

	if (!s || !f)
		return (0);
	buffer = ft_strdup(s);
	if (!buffer)
		return (0);
	count = 0;
	while (buffer[count])
	{
		buffer[count] = f(count, buffer[count]);
		count++;
	}
	return (buffer);
}

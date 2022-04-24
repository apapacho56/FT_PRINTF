/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:01 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 15:17:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (ft_strlen(s1)+1));
	if (!buffer)
		return (0);
	buffer = ft_memcpy(buffer, s1, (ft_strlen(s1)+1));
	return (buffer);
}

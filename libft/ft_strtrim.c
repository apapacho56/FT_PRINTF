/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:58:38 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/06 14:52:27 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;

	if (!set || !s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	count = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[count]))
		count--;
	return (ft_substr(s1, 0, count + 1));
}

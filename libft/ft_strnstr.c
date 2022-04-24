/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:01:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 17:21:50 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		counter;
	size_t		counter2;
	size_t		offset;
	int			found;

	counter = -1;
	found = 1;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + ++counter) && counter < len)
	{
		counter2 = 0;
		if (*(haystack + counter) == *(needle + 0))
		{
			offset = counter;
			found = 1;
			while (*(haystack + offset) && *(needle + counter2)
				&& counter2 < len && offset < len)
				if (*(haystack + offset++) != *(needle + counter2++))
					found = 0;
			if (found && !*(needle + counter2))
				return ((char *)haystack + counter);
		}
	}
	return (NULL);
}

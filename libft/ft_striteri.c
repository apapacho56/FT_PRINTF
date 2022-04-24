/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:48:20 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 19:37:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;
	size_t			len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	count = 0;
	while (count < len)
	{
		f(count, &(s[count]));
		count++;
	}
}

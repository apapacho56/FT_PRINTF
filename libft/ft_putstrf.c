/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:23:39 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/20 14:20:34 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrf(char *s, int *p)
{
	unsigned int	count;

	if (!s)
		return ;
	count = -1;
	while (s[++count] != '\0')
	{
		write (1, &s[count], 1);
		*p = *p + 1;
	}
}

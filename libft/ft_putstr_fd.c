/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:21:49 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/08 19:40:32 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	count;

	if (!s)
		return ;
	count = 0;
	while (count < ft_strlen(s))
	{
		write (fd, &s[count], 1);
		count++;
	}
}

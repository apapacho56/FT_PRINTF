/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:54:28 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/22 13:33:00 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int				sign;
	int				buffer;
	unsigned int	counter;

	counter = 0;
	sign = 1;
	buffer = 0;
	while (str[counter] == '\n'
		|| str[counter] == '\t' || str[counter] == '\r'
		|| str[counter] == '\v' || str[counter] == '\f'
		|| str[counter] == ' ')
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = sign *(-1);
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		buffer = (str[counter] - '0') + (buffer * 10);
		counter++;
	}
	return (buffer * sign);
}

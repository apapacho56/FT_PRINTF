/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:04:40 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/21 20:08:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		pos;

	index = -1;
	pos = 0;
	va_start(args, format);
	while (format[++index] != '\0')
	{
		if (format[index] == '%')
			ft_check(&index, format, args, &pos);
		else
		{
			write(1, &format[index], 1);
			pos = pos + 1;
		}
	}
	va_end(args);
	return (pos);
}

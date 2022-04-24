/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:05:37 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/22 11:14:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check(int *c1, const char *f, va_list a, int *p)
{
	(*c1)++;
	if (f[*c1] == 'c')
		flag_c(a, p);
	else if (f[*c1] == 's')
		flag_s(a, p);
	else if (f[*c1] == 'd' || f[*c1] == 'i')
		flag_int(a, p);
	else if (f[*c1] == 'u')
		flag_unt(a, p);
	else if (f[*c1] == 'o')
		flag_oct(a, p);
	else if (f[*c1] == 'x')
		flag_hex(a, p);
	else if (f[*c1] == 'X')
		flag_hexm(a, p);
	else if (f[*c1] == '%')
		flag_per(p);
	else if (f[*c1] == 'p')
		flag_vo(a, p);
}

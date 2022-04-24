/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 14:54:58 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/22 11:14:02 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_check(int *c1, const char *f, va_list a, int *p);
void	flag_c(va_list a, int *p);
void	flag_s(va_list a, int *p);
void	flag_int(va_list a, int *p);
void	flag_unt(va_list a, int *p);
void	flag_oct(va_list a, int *p);
void	flag_hex(va_list a, int *p);
void	flag_hexm(va_list a, int *p);
void	flag_per(int *p);
void	flag_vo(va_list a, int *p);

#endif

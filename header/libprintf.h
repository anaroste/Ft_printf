/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:10:16 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/01 08:31:32 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>
# include "../libft/libft.h"

/*
**					STRUCTURES
*/

/*
**	|0 | 1 |  2 |  3 |  4 |    5   |     6    |7=1    2    3    4    5    6 | 8|
**	|# | 0 |  - |  + |    | lenght | precision| hh |  h |  l | ll |  j |  z | ?|
*/

typedef struct			s_stock
{
	unsigned long long	ull;
	char				type;
	int					opt[9];
	char				*str;
}						t_stock;

/*
**					PROTOTYPES
*/

void					ft_init_struct(t_stock *stock);
int						ft_printf(const char *format, ...);

void					ft_handler_flag(char *format, t_stock *stock, int *i);
void					ft_handler_lenght(char *format, t_stock *stock, int *i);
void					ft_handler_accurancy(char *format, t_stock *stock,
							int *i);
void					ft_handler_modifier1(char *format, t_stock *stock,
							int *i);
void					ft_handler_modifier2(char *format, t_stock *stock,
							int *i);

void					ft_convert_di(t_stock *stock, va_list ap);
void					ft_convert_o(t_stock *stock);
void					ft_convert_u(t_stock *stock);
void					ft_convert_x(t_stock *stock);
void					ft_convert_mx(t_stock *stock);
void					ft_convert_ouxmx(t_stock *stock, va_list ap);
void					ft_convert_md(t_stock *stock, va_list ap);
void					ft_convert_momumod(t_stock *stock, va_list ap);
void					ft_convert_s(t_stock *stock, va_list ap);
void					ft_convert_c(t_stock *stock, va_list ap);
void					ft_convert_ms(t_stock *stock, va_list ap);
void					ft_convert_mc(t_stock *stock, va_list ap);
void					ft_convert_p(t_stock *stock, va_list ap);
void					ft_convert_mod(t_stock *stock);

void					ft_add_nchar_before(t_stock *stock, int nb, char c);
void					ft_add_nchar_after(t_stock *stock, int nb, char c);
void					ft_add_nchar_afone(t_stock *stock, int nb, char c);
void					ft_add_nchar_custom(t_stock *stock, int nb, char c);
int						ft_printnchar(int nb, char c);

size_t					ft_wcslen(wchar_t *str);
size_t					ft_strlenwcs(wchar_t *wcs);
int						ft_wc_convert(char *s, wchar_t wchar);
int						ft_wcs_convert(char *s, wchar_t *pwcs, int n);

#endif

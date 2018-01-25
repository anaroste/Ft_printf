/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:10:16 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:26:22 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
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

t_stock					ft_init_struct(void);
int						ft_printf(const char *format, ...);

void					ft_handler_flag(char *format, t_stock *stock, int *i);
void					ft_handler_lenght(char *format, t_stock *stock, int *i);
void					ft_handler_accurancy(char *format, t_stock *stock,
							int *i);
void					ft_handler_modifier1(char *format, t_stock *stock,
							int *i);
void					ft_handler_modifier2(char *format, t_stock *stock,
							int *i);

void					ft_convert_mod(t_stock *stock, va_list ap);
void					ft_convert_di(t_stock *stock, va_list ap);
void					ft_convert_o(t_stock *stock);
void					ft_convert_u(t_stock *stock);
void					ft_convert_x(t_stock *stock);
void					ft_convert_oux(t_stock *stock, va_list ap);
void					ft_convert_md(t_stock *stock, va_list ap);
void					ft_convert_mo(t_stock *stock, va_list ap);
void					ft_convert_mu(t_stock *stock, va_list ap);
void					ft_convert_s(t_stock *stock, va_list ap);
void					ft_convert_c(t_stock *stock, va_list ap);
void					ft_convert_ms(t_stock *stock, va_list ap);
void					ft_convert_mc(t_stock *stock, va_list ap);
void					ft_convert_p(t_stock *stock, va_list ap);

void					ft_add_precision(t_stock *stock);
void					ft_add_sign(t_stock *stock);
void					ft_add_space(t_stock *stock);
void					ft_add_lenght(t_stock *stock);
void					ft_add_zero(t_stock *stock);
void					ft_add_x(t_stock *stock);
void					ft_cut_precision(t_stock *stock);

#endif

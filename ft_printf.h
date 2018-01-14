/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 14:19:35 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/14 15:05:53 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

/*
**		GLOBALS
*/

//int					g_ret;

/*
**		STRUCTURES
*/

/*
**	|0 | 1 |  2 |  3 |  4 |    5   |     6    |7=1    2    3    4    5    6 | 8|
**	|# | 0 |  - |  + |    | lenght | accuracy | hh |  h |  l | ll |  j |  z | ?|
**
**	| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 |
**	| d | i | o | u | x | X | D | O | U | c |  s |  C |  S |  p |  % |
*/

typedef struct		s_stock
{
	char			type;
	int				opt[9];
}					t_stock;

/*
**		PROTOTYPES
*/

t_stock				ft_init_struct(void);

int					ft_printf(const char *format, ...);

void				ft_handler_flag(char *format, t_stock *stock, int *i);
void				ft_handler_lenght(char *format, t_stock *stock, int *i);
void				ft_handler_accurancy(char *format, t_stock *stock, int *i);
void				ft_handler_modifier1(char *format, t_stock *stock, int *i);
void				ft_handler_modifier2(char *format, t_stock *stock, int *i);

void				(*ft_set_up[120])(t_stock *stock, va_list ap);

void				ft_convert_mod(t_stock *stock, va_list ap);
void				ft_convert_i(t_stock *stock, va_list ap);

void				ft_putchar(const char c);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
void				ft_putstr_len(const char *str, int len);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
size_t				ft_strlen_c(const char *s, char c);

#endif

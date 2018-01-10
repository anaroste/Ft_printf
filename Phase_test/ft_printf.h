/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 14:19:35 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/10 17:50:45 by anaroste         ###   ########.fr       */
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

char				g_buf[4096];
int					g_i;

/*
**		STRUCTURES
*/

/*
**	|  0 |  1 |  2 |  3 |  4 |    5   |     6    |  7 |  8 |  9 | 10 | 11 | 12 |
**	|  # |  0 |  - |  + |    | lenght | accuracy | hh |  h |  l | ll |  j |  z |
*/

typedef struct		s_stock
{
	int				i;
	int				opt[13];
}					t_stock;

/*
**		PROTOTYPES
*/

t_stock				ft_init_struct(void);
void				ft_init_buf(void);

int					ft_printf(const char *format, ...);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1001.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:53:09 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/10 17:50:34 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	FONCTIONS D'INITIALISATIONS
*/

void		ft_init_buf(void)
{
	int			i;

	i = 0;
	while (i < 4096)
	{
		g_buf[i] = '\0';
		i++;
	}
	g_i = 0;
}

t_stock		ft_init_struct(void)
{
	int			i;
	t_stock		stock;

	i = -1;
	stock.i = 0;
	while (++i < 13)
		stock.opt[i++] = 0;
	return (stock);
}

/*
**
*/

int			ft_printf(const char *format, ...)
{
	int			i;
	int			ret;
	va_list		ap;
	t_stock		stock;

	if (ft_strchr(format, '%') == NULL)
	{
		write (1, format, ft_strlen(format));
		ret = ft_strlen(format);
	}
	else
	{
		va_start(ap, format);
		stock = ft_init_struct();
		ft_init_buf();

		va_end(ap);
	}
	return (ret);
}

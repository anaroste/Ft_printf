/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_0701.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:17:20 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/10 16:52:21 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init_buf(void)
{
	int		i;

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


void	ft_check_flag(const char *format, t_stock *stock)
{
	int		i;

	i = stock->i;
	
}

void	ft_check_first(const char *format, t_stock *stock)
{
	if (format[stock->i + 1] == '%')
	{
		stock->i = stock->i + 1;
		return ;
	}
	ft_check_flag(format, stock);
}

int		ft_printf(const char *format, ...)
{
	t_stock		stock1;

	stock1 = ft_init_struct();
	ft_init_buf();
	while (format[stock1.i])
	{
		if (format[stock1.i] == '%')
			ft_check_first(format, &stock1);
		g_buf[g_i++] = format[stock1.i++];
	}
	printf("%s\n", g_buf);
	return 0;
}

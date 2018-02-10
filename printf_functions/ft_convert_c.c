/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:08:27 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/10 15:06:25 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_second(t_stock *stock, ...)
{
	va_list		ap;

	va_start(ap, stock);
	ft_convert_c(stock, ap);
	va_end(ap);
	printf("%s\n", stock->str);
}

void		ft_convert_c(t_stock *stock, va_list ap)
{
	if (stock->opt[7] != 0)
		ft_convert_mc(stock, ap);
	else
	{
		stock->str = (char *)malloc(sizeof(char) * 2);
		stock->str[0] = va_arg(ap, int);
		stock->str[1] = '\0';
		stock->opt[1] = 0;
		ft_add_lenght(stock);
	}
}
/*
int		main()
{
	t_stock		stock;
	int			i;

	i = -1;
	stock.ull = 0;
	stock.str = NULL;
	stock.type = 'c';
	while (++i < 9)
		stock.opt[i++] = 0;
	stock.opt[5] = 4;

	ft_second(&stock, 'e');
	printf("/------\\\n");
	printf("%4c", 'e');
}
*/

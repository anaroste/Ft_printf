/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:08:27 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/10 10:33:20 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_c(t_stock *stock, va_list ap)
{
	char	*tmp;

	if (stock->opt[7] != 0)
		ft_convert_mc(stock, ap);
	else
	{
		tmp = (char *)malloc(sizeof(char) * 2);
		tmp[0] = va_arg(ap, int);
		tmp[1] = '\0';
		stock->str = tmp;
		free(tmp);
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


}
*/

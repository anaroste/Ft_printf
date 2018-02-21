/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:10:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/18 14:01:04 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_c(t_stock *stock, va_list ap)
{
	char	*tmp;

	if (stock->opt[7] == 3)
		ft_convert_mc(stock, ap);
	tmp = stock->str;
	stock->str = (char *)malloc(sizeof(char) * (stock->opt[5] + 2));
	stock->str[0] = va_arg(ap, int);
	stock->str[1] = '\0';
	if (stock->opt[5] > 1)
	{
		if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] - 1, ' ');
		else if (stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] - 1, '0');
		else
			ft_add_nchar_before(stock, stock->opt[5] - 1, ' ');
	}
	free(tmp);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 14:43:00 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/18 15:19:06 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_convert_s(t_stock *stock, va_list ap)
{
	if (stock->opt[7] == 3)
		ft_convert_ms(stock, ap);
	stock->str = va_arg(ap, char*);
	if (stock->str == NULL)
		stock->str = "(null)";
	if (stock->opt[6] < (int)ft_strlen(stock->str) && stock->opt[6] > -1)
		stock->str = ft_strncpy(stock->str, stock->str, stock->opt[6]);
	{
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] - (int)ft_strlen(stock->str),
					' ');
		else if (stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] - (int)ft_strlen(stock->str),
					'0');
		else
			ft_add_nchar_before(stock, stock->opt[5] - (int)ft_strlen(stock->str),
					' ');
	}
}

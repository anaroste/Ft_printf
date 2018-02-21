/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:43:38 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/19 19:20:29 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void			ft_convert_p(t_stock *stock, va_list ap)
{
	stock->str =
		ft_custom_itoa_base((unsigned long long)va_arg(ap, void*), 16, 'x');
	if (stock->str[0]== '\0')
		stock->str = "0";
	ft_add_nchar_before(stock, 1, 'x');
	ft_add_nchar_before(stock, 1, '0');
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else if (stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), '0');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
	}
}

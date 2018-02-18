/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 09:52:28 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/18 14:20:28 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_mod(t_stock *stock)
{
	stock->str = "%";
	if (stock->opt[5] > 1)
	{
		if (stock->opt[2] == -1)
		{
			if (stock->opt[1] == 1)
				ft_add_nchar_before(stock, stock->opt[5] - 1, '0');
			else
				ft_add_nchar_before(stock, stock->opt[5] - 1, ' ');
		}
		else
		{
			if (stock->opt[1] == -1)
				ft_add_nchar_after(stock, stock->opt[5] - 1, ' ');
			else
				ft_add_nchar_after(stock, stock->opt[5] - 1, '0');
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:08:51 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/24 12:08:30 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_convert_u(t_stock *stock)
{
//	char	*tmp;

//	tmp = stock->str;
	if (stock->ull == 0)
	{
		if (stock->opt[6] == 0)
		{
			stock->str = "";
		}
		else
		{
			stock->str = malloc(2);
			stock->str[0] = '0';
			stock->str[1] = '\0';
		}
	}
	else
		stock->str = ft_ullong_itoa_base(stock->ull, 10);
//	free (tmp);
	if (stock->opt[6] > (int)ft_strlen(stock->str))
		ft_add_nchar_before(stock, stock->opt[6] - (int)ft_strlen(stock->str),
				'0');
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if ((stock->opt[6] <= 0 && stock->opt[2] == -1) && stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), '0');
		else if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
	}
	
}

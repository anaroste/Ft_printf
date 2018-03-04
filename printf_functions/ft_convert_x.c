/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:08:51 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 17:18:39 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_convert_x_third(t_stock *stock)
{
	if (stock->opt[6] > (int)ft_strlen(stock->str))
		ft_add_nchar_before(stock, stock->opt[6] - (int)ft_strlen(stock->str),
				'0');
	if (stock->opt[6] == 0)
		stock->opt[1] = -1;
	if (stock->opt[0] == 1 && stock->opt[1] == -1)
	{
		ft_add_nchar_before(stock, 1, 'x');
		ft_add_nchar_before(stock, 1, '0');
	}
	else if (stock->opt[0] == 1 && stock->opt[1] == 1)
		stock->opt[5] -= 2;
}

static void		ft_convert_x_second(t_stock *stock)
{
	if (stock->ull == 0)
	{
		stock->opt[0] = -1;
		if (stock->opt[6] == 0)
		{
			if (!(stock->str = (char *)malloc(sizeof(char) * 1)))
				exit(EXIT_FAILURE);
			stock->str[0] = '\0';
		}
		else
		{
			if (!(stock->str = malloc(2)))
				exit(EXIT_FAILURE);
			stock->str[0] = '0';
			stock->str[1] = '\0';
		}
	}
	else
		stock->str = ft_custom_itoa_base(stock->ull, 16, 'x');
}

void			ft_convert_x(t_stock *stock)
{
	ft_convert_x_second(stock);
	ft_convert_x_third(stock);
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if ((stock->opt[6] <= 0 && stock->opt[2] == -1) && stock->opt[1] == 1)
		{
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), '0');
			if (stock->opt[0] == 1)
			{
				ft_add_nchar_before(stock, 1, 'x');
				ft_add_nchar_before(stock, 1, '0');
			}
		}
		else if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
	}
}

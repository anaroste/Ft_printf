/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:18:16 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/15 15:58:38 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_di_zero(t_stock *stock)
{
	int		i;

	i = 0;
	while (i < stock->opt[5])
		stock->str[i++] = ' ';
}

static void		ft_convert_di_second(t_stock *stock)
{
	if (stock->opt[6] > (int)ft_strlen(stock->str))
		ft_add_nchar_before(stock, stock->opt[6] - (int)ft_strlen(stock->str),
				'0');
	if (stock->opt[3] != 0)
		ft_add_nchar_before(stock, 1, '+');
	else if (stock->opt[4] != 0)
		ft_add_nchar_before(stock, 1, ' ');
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if ((stock->opt[6] == 0 && stock->opt[2] == 0) && stock->opt[1] == 1)
		{
			if (stock->opt[3] == 0 && stock->opt[4] == 0)
				ft_add_nchar_before(stock, stock->opt[5] -
						(int)ft_strlen(stock->str), '0');
			else
				ft_add_nchar_afone(stock, stock->opt[5] -
						(int)ft_strlen(stock->str), '0');
		}
		else if (stock->opt[2] != 0)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
	}
}

void			ft_convert_di(t_stock *stock, va_list ap)
{
	if (stock->opt[7] == 0)
		stock->str = ft_itoa(va_arg(ap, int));
	if (stock->opt[7] == 1)
		stock->str = ft_llong_itoa((long long)(signed char)va_arg(ap, int));
	if (stock->opt[7] == 2)
		stock->str = ft_llong_itoa((long long)(short)va_arg(ap, int));
	if (stock->opt[7] == 3)
		stock->str = ft_llong_itoa((long long)va_arg(ap, long));
	if (stock->opt[7] == 4)
		stock->str = ft_llong_itoa((long long)va_arg(ap, long long));
	if (stock->opt[7] == 5)
		stock->str = ft_llong_itoa((long long)(intmax_t)va_arg(ap, long long));
	if (stock->opt[7] == 6)
		stock->str = ft_llong_itoa((long long)va_arg(ap, unsigned long long));
	if (stock->str[0] == '0' && stock->opt[6] == -1)
		ft_di_zero(stock);
	else
		ft_convert_di_second(stock);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 10:09:46 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:48:37 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_convert_next(t_stock *stock)
{
	if ((int)ft_strlen(stock->str) < stock->opt[6])
		ft_add_precision(stock);
	if (stock->opt[3] != 0)
		ft_add_sign(stock);
	if (stock->opt[4] != 0)
		ft_add_space(stock);
	if (stock->opt[5] != 0)
		ft_add_lenght(stock);
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
	ft_convert_next(stock);
}

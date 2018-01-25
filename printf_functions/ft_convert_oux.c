/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_oux.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:05:29 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:44:24 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_oux(t_stock *stock, va_list ap)
{
	if (stock->opt[7] == 0)
		stock->ull = (unsigned long long)(va_arg(ap, unsigned int));
	if (stock->opt[7] == 1)
		stock->ull = (unsigned long long)(unsigned char)va_arg(ap, int);
	if (stock->opt[7] == 2)
		stock->ull = (unsigned long long)(unsigned short)va_arg(ap, int);
	if (stock->opt[7] == 3)
		stock->ull = (unsigned long long)va_arg(ap, long);
	if (stock->opt[7] == 4)
		stock->ull = (unsigned long long)va_arg(ap, long long);
	if (stock->opt[7] == 5)
		stock->ull = (unsigned long long)(uintmax_t)va_arg(ap, long long);
	if (stock->opt[7] == 6)
		stock->ull = (unsigned long long)va_arg(ap, unsigned long long);
	if (stock->type == 'o')
		ft_convert_o(stock);
	if (stock->type == 'u')
		ft_convert_u(stock);
	if (stock->type == 'x' || stock->type == 'X')
		ft_convert_x(stock);
}

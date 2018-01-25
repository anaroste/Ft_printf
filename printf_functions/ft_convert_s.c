/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 10:29:27 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:45:11 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_s(t_stock *stock, va_list ap)
{
	if (stock->opt[7] != 0)
		ft_convert_ms(stock, ap);
	stock->str = va_arg(ap, char *);
	stock->opt[1] = 0;
	ft_cut_precision(stock);
	ft_add_lenght(stock);
}

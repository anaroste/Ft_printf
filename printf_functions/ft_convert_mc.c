/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_mc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:10:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/01 14:28:21 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int		ft_printf_mc_rest(t_stock *stock, int len)
{
	if (stock->opt[1] == -1)
		return (ft_printnchar(stock->opt[5] - len, ' '));
	else
		return (ft_printnchar(stock->opt[5] - len, '0'));
}

void			ft_convert_mc(t_stock *stock, va_list ap)
{
	int			count;
	int			len;
	wchar_t		c;
	char		*str;

	count = 0;
	c = va_arg(ap, wchar_t);
	len = ft_strlenwcs(&c);
	str = (char*)malloc(len + 1);
	str[len] = '\0';
	len = ft_wc_convert(str, c);
	if (stock->opt[2] == -1)
		count += ft_printf_mc_rest(stock, len);
	count += write(1, str, len);
	if (stock->opt[2] != -1)
		count += ft_printf_mc_rest(stock, len);
	ft_strdel(&str);
	stock->opt[8] = count - 1;
	stock->opt[7] = -2;
	if (stock->opt[5] > 0)
		stock->opt[8] -= (stock->opt[5] - 1);
	ft_convert_c(stock, ap);
}

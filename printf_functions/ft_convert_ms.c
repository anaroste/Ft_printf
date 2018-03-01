/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_ms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:10:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/01 14:22:27 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int		ft_printf_ms_rest(t_stock *stock)
{
	if (stock->opt[1] == -1)
		return (ft_printnchar(stock->opt[5] - stock->opt[6], ' '));
	else
		return (ft_printnchar(stock->opt[5] - stock->opt[6], '0'));
}

void			ft_convert_ms(t_stock *stock, va_list ap)
{
	wchar_t		*wcs;
	char		*str;
	int			len;
	int			count;

	count = 0;
	wcs = va_arg(ap, wchar_t*);
	len = ft_strlenwcs(wcs);
	if (stock->opt[6] == -1 || stock->opt[6] > len)
		stock->opt[6] = len;
	str = (char*)malloc(len + 1);
	if ((len = ft_wcs_convert(str, wcs, stock->opt[6])) == -1)
		return ;
	if (stock->opt[2] == -1)
		count += ft_printf_ms_rest(stock);
	str[len] = '\0';
	if (wcs == NULL)
		write(1, "(null)", stock->opt[6]);
	else
		write(1, str, ft_strlen(str));
	if (stock->opt[2] != -1)
		count += ft_printf_ms_rest(stock);
	ft_strdel(&str);
	stock->opt[7] = -2;
	stock->opt[8] = stock->opt[6] + count;
	ft_convert_s(stock, ap);
}

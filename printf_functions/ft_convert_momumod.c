/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_momumod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:46:15 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/03 18:19:19 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_momumod(t_stock *stock, va_list ap)
{
	if (stock->type == '%')
		ft_convert_mod(stock);
	else
	{
		stock->opt[7] = 3;
		stock->type += 32;
		ft_convert_ouxmx(stock, ap);
	}
}

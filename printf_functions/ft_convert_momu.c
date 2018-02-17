/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_momu.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:46:15 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/17 12:51:07 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_momu(t_stock *stock, va_list ap)
{
	stock->opt[7] = 3;
	stock->type += 32;
	ft_convert_ouxmx(stock, ap);
}

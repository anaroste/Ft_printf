/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_mo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:36:12 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/09 13:35:10 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_mo(t_stock *stock, va_list ap)
{
	stock->type = 'o';
	stock->opt[7] = 3;
	ft_convert_oux(stock, ap);
}

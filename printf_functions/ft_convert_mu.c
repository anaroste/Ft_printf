/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_mu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:36:12 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:43:45 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_mu(t_stock *stock, va_list ap)
{
	stock->type = 'u';
	stock->opt[7] = 3;
	ft_convert_oux(stock, ap);
}

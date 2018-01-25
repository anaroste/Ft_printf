/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_o.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 09:28:59 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:44:03 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void		ft_convert_o(t_stock *stock)
{
	if (stock->opt[6] > ft_strlen(stock->str))
		ft_add_precision(stock);
	if (stock->opt[0] != 0)
		ft_add_zero(stock);
	ft_add_lenght(stock);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 12:02:44 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:46:13 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_convert_o(t_stock *stock)
{
	stock->str = ft_custom_itoa(stock->ull, 16, stock->type);
	if (ft_strlen(stock->str) < stock->opt[6])
		ft_add_precision(stock);
	else if (stock->opt[0] != 0)
		ft_add_x(stock);
	if (stock->opt[5] != 0)
		ft_add_lenght(stock);
}

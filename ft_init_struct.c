/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:53:39 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/14 09:34:16 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_stock		ft_init_struct(void)
{
	int			i;
	t_stock		stock;

	i = -1;
	stock.type = 0;
	while (++i < 9)
		stock.opt[i++] = 0;
	return (stock);
}

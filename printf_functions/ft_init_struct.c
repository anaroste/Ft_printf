/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:53:39 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/18 12:16:18 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

t_stock		ft_init_struct(void)
{
	int			i;
	t_stock		stock;

	i = -1;
	stock.ull = 0;
	stock.str = NULL;
	stock.type = 0;
	while (++i < 9)
		stock.opt[i++] = -1;
	return (stock);
}

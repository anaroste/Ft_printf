/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:16:19 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/10 16:52:19 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_stock		ft_init_struct(void)
{
	int		i;
	t_stock	stock;

	i = -1;
	while (++i < 13)
		stock.opt[i] = 0;
	return (stock);
}

void		ft_mc2(t_stock *stock)
{
	int		i = -1;
	while (++i < 13)
		stock->opt[i] = 2;
}

void		ft_mc(t_stock *stock)
{
	int		i = -1;
	while (++i < 13)
		stock->opt[i] = 1;
	ft_mc2(stock);
}

int		main()
{
	int		i = -1;
	t_stock		stock;

	stock = ft_init_struct();
	ft_mc(&stock);
	while (++i < 13)
		printf("i = %.2d | stock.opt = %d\n", i, stock.opt[i]);
	return 0;
}

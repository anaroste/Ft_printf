/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:53:39 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/24 20:17:37 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_init_struct(t_stock *stock)
{
	int			i;

	i = 0;
	stock->ull = 0;
	stock->str = NULL;
	stock->type = 0;
	while (i < 9)
	{
		stock->opt[i] = -1;
		i++;
	}
	stock->opt[8] = 0;
}
/*
void	ft_end_struct(t_stock *stock)
{
	free(stock);
}

int main()
{
	const t_stock		stock = :;

	ft_ini_struct(&stock);

	printf("# = %d\n", stock.opt[0]);
	printf("0 = %d\n", stock.opt[1]);
	printf("- = %d\n", stock.opt[2]);
	printf("+ = %d\n", stock.opt[3]);
	printf("  = %d\n", stock.opt[4]);
	printf("l = %d\n", stock.opt[5]);
	printf("p = %d\n", stock.opt[6]);

	ft_end_struct(&stock);
	return 0;
}*/

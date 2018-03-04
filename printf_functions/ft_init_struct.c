/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:53:39 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 16:08:33 by anaroste         ###   ########.fr       */
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

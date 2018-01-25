/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:08:30 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:46:38 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_cut_precision(t_stock *stock)
{
	char	*tmp;

	if (stock->opt[6] < (int)ft_strlen(stock->str))
	{
		tmp = (char *)malloc(sizeof(char) * (stock->opt[6] + 1));
		tmp = ft_strncpy(tmp, stock->str, stock->opt[6]);
		tmp[stock->opt[6] + 1] = '\0';
		stock->str = tmp;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:54:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:38:30 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_precision(t_stock *stock)
{
	int		count;
	char	*str;
	int		i;

	i = 0;
	count = stock->opt[6] - ft_strlen(stock->str);
	str = (char *)malloc(sizeof(char) * (count + 1));
	while (count--)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	stock->str = ft_strcat(str, stock->str);
	free(str);
}

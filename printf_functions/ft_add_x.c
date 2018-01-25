/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 12:08:26 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:40:10 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_x(t_stock *stock)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 3);
	str[0] = '0';
	if (stock->type == 'x')
		str[1] = 'x';
	else
		str[1] = 'X';
	str[2] = '\0';
	stock->str = ft_strcat(str, stock->str);
	free(str);
}

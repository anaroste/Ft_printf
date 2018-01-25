/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 11:23:39 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:40:33 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_zero(t_stock *stock)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	stock->str = ft_strcat(str, stock->str);
	free(str);
}

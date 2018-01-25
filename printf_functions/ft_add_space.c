/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:54:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:39:38 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_space(t_stock *stock)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = ' ';
	str[1] = '\0';
	stock->str = ft_strcat(str, stock->str);
	free(str);
}

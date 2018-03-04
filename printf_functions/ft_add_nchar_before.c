/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nchar_before.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:35:51 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 14:15:56 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_nchar_before(t_stock *stock, int nb, char c)
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(stock->str);
	tmp = stock->str;
	stock->str = (char *)malloc(sizeof(char) * (len + nb + 1));
	stock->str[len + nb] = '\0';
	while (i < nb)
		stock->str[i++] = c;
	nb = 0;
	while (len--)
		stock->str[i++] = tmp[nb++];
	stock->str[i] = '\0';
	ft_strdel(&tmp);
}

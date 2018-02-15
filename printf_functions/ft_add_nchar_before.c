/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nchar_before.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:35:51 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/15 14:10:10 by anaroste         ###   ########.fr       */
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
	free(tmp);
}
/*
   int		main()
   {
   t_stock		stock;

   stock.str = "42";
   ft_add_nchar_before(&stock, 3, '9');
   printf("%s\n", stock.str);
   return 0;
   }
   */

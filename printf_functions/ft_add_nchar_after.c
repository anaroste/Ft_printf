/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nchar_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 13:46:13 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/15 09:10:21 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_add_nchar_after(t_stock *stock, int	 nb, char c)
{
	char	*str;
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(stock->str));
	str = (char *)malloc(sizeof(char) * nb);
	while (stock->str[i])
	{
		tmp[i] = stock->str[i];
		i++;
	}
	i = 0;
	while (nb--)
		str[i++] = c;
	stock->str = ft_strcat(tmp, str);
	free(str);
	free(tmp);
}
/*
int		main()
{
	t_stock		stock;

	stock.str = "42";
	ft_add_nchar_after(&stock, 3, '0');
	printf("%s\n", stock.str);
	return 0;
}
*/

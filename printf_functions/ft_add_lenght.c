/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lenght.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 18:10:20 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:38:02 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static void		ft_zero(t_stock *stock, char *str, int i, int j)
{
	if (stock->str[j] == ' ' || stock->str[j] == '+')
		str[i++] = stock->str[j++];
	while (stock->opt[5]--)
		str[i++] = '0';
	while (stock->str[j])
		str[i++] = stock->str[j++];
	str[i] = '\0';
	stock->str = str;
}

static void		ft_else(t_stock *stock, char *str, int i)
{
	char	*tmp;

	while (stock->opt[5]--)
		str[i++] = ' ';
	str[i] = '\0';
	if (stock->opt[2] != 0)
	{
		tmp = (char *)malloc(sizeof(char) * ft_strlen(stock->str));
		tmp = ft_strcat(tmp, stock->str);
		stock->str = ft_strcat(tmp, str);
		free(tmp);
	}
	else
		stock->str = ft_strcat(str, stock->str);
}

void			ft_add_lenght(t_stock *stock)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = NULL;
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		str = (char *)malloc(sizeof(char) * (stock->opt[5] + 1));
		stock->opt[5] = stock->opt[5] - ft_strlen(stock->str);
		if (stock->opt[1] != 0)
			ft_zero(stock, str, i, j);
		else
			ft_else(stock, str, i);
		free(str);
	}
}

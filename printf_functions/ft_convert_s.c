/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 14:43:00 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/20 15:51:53 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_convert_s(t_stock *stock, va_list ap)
{
	char	*tmp;
	int		i;

printf("01\n");
	i = 0;
	if (stock->opt[7] == 3)
		ft_convert_ms(stock, ap);
printf("02\n");
	tmp = va_arg(ap, char*);
printf("03\n");
	if (tmp == NULL)
	{
		stock->str = (char *)malloc(sizeof(char) * (7));
		stock->str[0] = '(';
		stock->str[1] = 'n';
		stock->str[2] = 'u';
		stock->str[3] = 'l';
		stock->str[4] = 'l';
		stock->str[5] = ')';
		stock->str[6] = '\0';
printf("04\n");
	}
	else
	{
		stock->str = (char *)malloc(sizeof(char) * ((int)ft_strlen(tmp) + 1));
		while (tmp[i])
		{
			stock->str[i] = tmp[i];
			i++;
		}
		stock->str[i] = '\0';
printf("05\n");
	}
	if ((stock->opt[6] > -1) && (stock->opt[6] < (int)ft_strlen(stock->str)))
	{
		while (stock->opt[6] < (int)ft_strlen(stock->str))
		{
			stock->str[stock->opt[6]] = '\0';
			stock->opt[6] += 1;
		}
printf("06\n");
	}
	if (stock->opt[5] > (int)ft_strlen(stock->str))
	{
		if (stock->opt[2] == 1)
			ft_add_nchar_after(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), ' ');
		else if (stock->opt[1] == 1)
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str), '0');
		else
			ft_add_nchar_before(stock, stock->opt[5] -
					(int)ft_strlen(stock->str) , ' ');
printf("06\n");
	}
}

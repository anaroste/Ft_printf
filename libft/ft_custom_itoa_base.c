/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_custom_itoa_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:34:10 by anaroste          #+#    #+#             */
/*   Updated: 2018/02/25 12:11:18 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(unsigned long long nbr, int base)
{
	int		count;

	count = 0;
	while (nbr > 0)
	{
		nbr /= base;
		count++;
	}
	return (count);
}

char			*ft_custom_itoa_base(unsigned long long nbr, int base, char c)
{
	int		count;
	char	*str;
	char	*tab;
	char	*tmp[2];

	str = NULL;
	tab = NULL;
	count = ft_count(nbr, base);
	tmp[0] = tab;
	tmp[1] = str;
	tab = (char *)malloc(sizeof(char) * 17);
	if (c == 'X')
		tab = "0123456789ABCDEF";
	else
		tab = "0123456789abcdef";
	str = (char *)malloc(sizeof(char) * (count + 1));
	str[count] = '\0';
	while (nbr != 0)
	{
		str[--count] = tab[(nbr % base)];
		nbr /= base;
	}
	ft_strdel(&tmp[0]);
	ft_strdel(&tmp[1]);
	return (str);
}

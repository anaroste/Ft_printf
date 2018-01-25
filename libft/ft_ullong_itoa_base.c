/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullong_itoa_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:46:41 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:30:35 by anaroste         ###   ########.fr       */
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

char			*ft_ullong_itoa_base(unsigned long long nbr, int base)
{
	int		count;
	char	*str;
	char	*tab;

	count = ft_count(nbr, base);
	tab = (char *)malloc(sizeof(char) * 17);
	tab = "0123456789ABCDEF";
	str = (char *)malloc(sizeof(char) * (count + 1));
	str[count] = '\0';
	while (nbr != 0)
	{
		str[--count] = tab[(nbr % base)];
		nbr /= base;
	}
	return (str);
}
/*
int		main()
{
	printf("%s\n", ft_ullong_itoa_base(1234567890, 8));
	return 0;
}
*/

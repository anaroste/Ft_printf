/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:28:53 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 17:32:14 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int		ft_countflag(char *str)
{
	int		i;

	i = 1;
	while ((str[i] != 'd' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'
			&& str[i] != 'x' && str[i] != 'X' && str[i] != 'O' && str[i] != 'U'
			&& str[i] != 'D' && str[i] != 'c' && str[i] != 's' && str[i] != 'C'
			&& str[i] != 'S' && str[i] != 'p' && str[i] != '%') && str[i])
		i++;
	return (i + 1);
}

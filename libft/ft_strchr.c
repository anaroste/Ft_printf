/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:26:25 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/12 09:42:56 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while ((s[i]) && (s[i] != (char)c))
		i++;
	if ((s[i] == (char)c))
		return ((char *)(&s[i]));
	if ((s[i] == '\0') && (c == 0))
		return ((char *)(&s[i]));
	return (NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_m.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 11:01:18 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/05 15:53:57 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_find_m(char *str, int i)
{
	char	flag[10];

	while (str[i])
	{
		if (str[i] == '%')
		{
			while (str[i] != 's' || str[i] != 'S' || str[i] != 'p' ||
					str[i] != 'd' || str[i] != 'D' || str[i] != 'i' ||
					str[i] != 'o' || str[i] != 'O' || str[i] != 'u' ||
					str[i] != 'U' || str[i] != 'x' || str[i] != 'X' ||
					str[i] != 'c' || str[i] != 'C' || str[i] != '%')
			i++;

		}
		else
			ft_putchar(str[i]);
	}
}

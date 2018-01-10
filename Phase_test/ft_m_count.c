/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 08:48:52 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/05 15:59:09 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_m_count(const char *format)
{
	int		i;
	int		m_count;
	int		save;

	m_count = 0;
	i = 0;
	save = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (save != 1)
			{
				m_count++;
				save = 1;
			}
			else
			{
				m_count--;
				save = 0;
			}
		}
		if (format[i] != '%')
			save = 0;
		i++;
	}
	return (m_count);
}

/*
int main(int argc, const char *argv[])
{
	if (argc != 2)
	{
		printf("wrong arg pd");
		return 0;
	}
	printf("m_count = %d\n", ft_m_count(argv[1]));
	return 0;
}
*/

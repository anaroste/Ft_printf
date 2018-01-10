/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_0601.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:37:32 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/06 15:17:28 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_write(const char *str, char **type, int i)
{
	int		j;

	j = 0;
	while (str[i] != '%' && str[i])
		ft_putchar(str[i++]);
	if (str[i] == '%')
	{
		if (str[i + 1] == '%')
		{
			ft_putchar('%');
			i += 2;
		}
		else
		{
			while (str[j] != 's' && str[j] != 'S' && str[j] != 'p' &&
					str[j] != 'd' && str[j] != 'D' && str[j] != 'i' &&
					str[j] != 'o' && str[j] != 'O' && str[j] != 'u' &&
					str[j] != 'U' && str[j] != 'x' && str[j] != 'X' &&
					str[j] != 'c' && str[j] != 'C')
			{
				*type[j] = str[i];
				i++;
				j++;
			}
		}
	}
	return (i);
}

int		ft_printf(const char *format, ...)
{
	int		i;
	char	*type;

	i = 0;
	i = ft_write(format, &type, i);
	printf("\ni = %d, %s\n", i, type);
	return 0;
}

int main(int argc, const char *argv[])
{
	int i = 287;
	printf("%+10.0ld\n", i);
	/*if (argc != 2)
	{
		printf("wrong arg pd");
		return 0;
	}*/
	//argc = ft_printf(argv[1]);
	return 0;
}

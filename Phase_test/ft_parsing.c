/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 09:53:41 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/06 12:18:56 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_parsing(const char *str)
{
	static int	i = 0;
	int			j;
	int			k;
	char		*ret;

	k = 0;
	ret =  NULL;
	while (str[i])
	{
		if (str[i] == '%')
		{
			j = i + 1;
			while (str[j] != 's' && str[j] != 'S' && str[j] != 'p' &&
					str[j] != 'd' && str[j] != 'D' && str[j] != 'i' &&
					str[j] != 'o' && str[j] != 'O' && str[j] != 'u' &&
					str[j] != 'U' && str[j] != 'x' && str[j] != 'X' &&
					str[j] != 'c' && str[j] != 'C' && str[j] != '%')
				j++;
			if (str[j] == '%')
				i = j + 1;
			if (str[j] != '%')
			{
				ret = (char *)malloc(sizeof(char) * (j - i + 1));
				while (i <= j)
					ret[k++] = str[i++];
				ret[k++] = '\0';
			}
		}
		else
			i++;
	}
	return (ret);
}

int main(int argc, const char *argv[])
{
	int		i = 3;

	if (argc != 2)
	{
		printf("wrong arg pd");
		return 0;
	}
	while (i--)
		printf("%s\n", ft_parsing(argv[1]));
	return 0;
}

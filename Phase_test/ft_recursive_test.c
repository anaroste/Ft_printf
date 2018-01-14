/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:49:54 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/11 14:17:57 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		g_ret = 0;

static void	ft_putstr_len(const char *str, int len)
{
	write(1, str, len);
}

static size_t	ft_strlen_nl(const char *s, char c)
{
	size_t		i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}

static char	*ft_strchr(const char *s, int c)
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

static size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i++] != '\0')
		count++;
	return (count);
}

void		ft_printf_second(char *format)
{
	char	*str;

	str = ft_strchr(format, '%');
	if (*format == '\0')
		return ;
	if (str == NULL)
	{
		write (1, format, ft_strlen(format));
		g_ret += ft_strlen(format);
		return ;
	}
	else if (*format != '%')
	{
		ft_putstr_len(format, ft_strlen_nl(format, '%'));
		g_ret += ft_strlen_nl(format, '%');
		ft_printf_second(str);
	}
	else
	{
		format++;
		ft_printf_second(format);
	}
}

int		ft_printf(const char *format)
{
	ft_printf_second((char *)format);
	return (g_ret);
}

int		main()
{
	printf("\n%d\n", ft_printf("qwert%yuiiop"));
	return 0;
}

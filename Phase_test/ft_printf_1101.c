/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1101.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:00:13 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/11 17:43:14 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_second(char *format, va_list ap)
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
		ft_handler_arg(format, ap);
	}
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;

	va_start(ap, format);
	ft_printf_second(&format, ap);
	va_end(ap);
	return (g_ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1101.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:00:13 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/14 15:05:47 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_ret = 0;

void		(ptr_function(t_stock *stock, va_list ap))
{
	void	(*tbl_function[15])(t_stock *stock, va_list ap);

	ft_set_up[0] = &ft_convert_i;
	ft_set_up[1] = &ft_convert_i;
//	ft_set_up[2] = &ft_convert_o;
//	ft_set_up[3] = &ft_convert_u;
//	ft_set_up[4] = &ft_convert_x;
//	ft_set_up[5] = &ft_convert_x;
//	ft_set_up[6] = &ft_convert_D;
//	ft_set_up[7] = &ft_convert_O;
//	ft_set_up[8] = &ft_convert_U;
//	ft_set_up[9] = &ft_convert_c;
//	ft_set_up[10] = &ft_convert_s;
//	ft_set_up[11] = &ft_convert_C;
//	ft_set_up[12] = &ft_convert_S;
//	ft_set_up[13] = &ft_convert_p;
	ft_set_up[14] = &ft_convert_mod;
	ft_set_up[15] = NULL;
}

static void		ft_handler_arg(char *format, va_list ap, int *i)
{
	t_stock		stock;

	stock = ft_init_struct();
	ft_handler_flag(format, &stock, i);
	ft_handler_lenght(format, &stock, i);
	ft_handler_accurancy(format, &stock, i);
	ft_handler_modifier1(format, &stock, i);
	ft_handler_modifier2(format, &stock, i);
	stock.type = format[*i];
	*i = *i + 1;
	//ft_set_function();
	
}

static void		ft_printf_second(char *format, va_list ap, int *i)
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
		ft_putstr_len(format, ft_strlen_c(format, '%'));
		g_ret += ft_strlen_c(format, '%');
		ft_printf_second(str, ap, i);
	}
	else
	{
		format++;
		ft_handler_arg(format, ap, i);
	}
}

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	ft_printf_second((char*)format, ap, &i);
	va_end(ap);
	return (g_ret);
}

int main(int argc, const char *argv[])
{
	argc = ft_printf(argv[1]);
	return 0;
}

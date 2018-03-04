/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:00:13 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/04 17:55:45 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/global.h"

static void		ft_ptr_function(void (*((*ft_set_up)[]))(t_stock*, va_list))
{
	(*ft_set_up)[0] = &ft_convert_di;
	(*ft_set_up)[1] = &ft_convert_di;
	(*ft_set_up)[2] = &ft_convert_ouxmx;
	(*ft_set_up)[3] = &ft_convert_ouxmx;
	(*ft_set_up)[4] = &ft_convert_ouxmx;
	(*ft_set_up)[5] = &ft_convert_ouxmx;
	(*ft_set_up)[6] = &ft_convert_md;
	(*ft_set_up)[7] = &ft_convert_momumod;
	(*ft_set_up)[8] = &ft_convert_momumod;
	(*ft_set_up)[9] = &ft_convert_c;
	(*ft_set_up)[10] = &ft_convert_s;
	(*ft_set_up)[11] = &ft_convert_mc;
	(*ft_set_up)[12] = &ft_convert_ms;
	(*ft_set_up)[13] = &ft_convert_p;
	(*ft_set_up)[14] = &ft_convert_momumod;
}

static int		ft_handler_arg_second(t_stock *stock, int *i, va_list ap,
		char *str)
{
	void		(*ft_set_up[15])(t_stock*, va_list);
	int			j;

	ft_ptr_function(&ft_set_up);
	j = 0;
	if (!ft_strchr(str, stock->type))
	{
		stock->str = "";
		return (1);
	}
	if (stock->type == 'c' && stock->opt[7] == 3)
		stock->type = 'C';
	*i = *i + 1;
	while (stock->type != str[j])
		j++;
	ft_set_up[j](stock, ap);
	return (0);
}

static void		ft_handler_arg(char *format, va_list ap, int *i)
{
	t_stock		stock;
	char		*str;

	*i = 1;
	str = "diouxXDOUcsCSp%";
	ft_init_struct(&stock);
	ft_handler_flag(format, &stock, i);
	ft_handler_lenght(format, &stock, i);
	ft_handler_accurancy(format, &stock, i);
	ft_handler_modifier1(format, &stock, i);
	ft_handler_modifier2(format, &stock, i);
	stock.type = format[*i];
	if (ft_handler_arg_second(&stock, i, ap, str) == 1)
		return ;
	if (stock.type != 'S' && stock.type != 'Y')
		g_ret += (int)ft_strlen(stock.str);
	if ((stock.type != 'C') && (stock.opt[7] != -2))
	{
		if (stock.type == 'c' && stock.opt[8] == 1)
			write(1, stock.str, ft_strlen(stock.str) + 1);
		else
			ft_putstr(stock.str);
	}
	g_ret += stock.opt[8];
	ft_strdel(&stock.str);
}

static void		ft_printf_second(char *format, va_list ap, int *i)
{
	char	*str;
	int		nb;

	str = ft_strchr(format, '%');
	if (*format == '\0')
		return ;
	if (str == NULL)
	{
		g_ret += write(1, format, ft_strlen(format));
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
		ft_handler_arg(format, ap, i);
		nb = ft_countflag(format);
		while (nb--)
			format++;
		ft_printf_second(format, ap, i);
	}
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	ft_printf_second((char *)format, ap, &i);
	va_end(ap);
	return (g_ret);
}

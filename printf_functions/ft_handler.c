/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:16:38 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 17:47:01 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

void	ft_handler_flag(char *format, t_stock *stock, int *i)
{
	while ((format[*i] == '#' || format[*i] == '0' ||
			format[*i] == '-' || format[*i] == '+' ||
			format[*i] == ' ') && format[*i])
	{
		if (format[*i] == '#')
			stock->opt[0] = 1;
		if (format[*i] == '0')
		{
			if (stock->opt[2] == 0)
				stock->opt[1] = 1;
		}
		if (format[*i] == '-')
		{
			stock->opt[2] = 1;
			stock->opt[1] = 0;
		}
		if (format[*i] == '+')
			stock->opt[3] = 1;
		if (format[*i] == ' ')
			stock->opt[4] = 1;
		if (stock->opt[4] == 1)
			stock->opt[3] = 0;
		*i = *i + 1;
	}
}

void	ft_handler_lenght(char *format, t_stock *stock, int *i)
{
	while (format[*i] >= '0' && format[*i] <= '9')
	{
		stock->opt[5] *= 10;
		stock->opt[5] += (int)format[*i] - '0';
		*i = *i + 1;
	}
}

void	ft_handler_accurancy(char *format, t_stock *stock, int *i)
{
	if (format[*i] == '.')
	{
		*i = *i + 1;
		if (format[*i] == '-')
		{
			*i = *i + 1;
			while (format[*i] >= '0' && format[*i] <= '9')
				*i = *i + 1;
			return ;
		}
		else
		{
			while (format[*i] >= '0' && format[*i] <= '9')
			{
				stock->opt[6] *= 10;
				stock->opt[6] += (int)format[*i] - '0';
				*i = *i + 1;
			}
		}
	}
}

void	ft_handler_modifier1(char *format, t_stock *stock, int *i)
{
	if (format[*i] == 'h' || format[*i] == 'l')
	{
		if (format[*i] == 'h')
		{
			*i = *i + 1;
			if (format[*i] == 'h')
			{
				stock->opt[7] = 1;
				*i = *i + 1;
			}
			else
				stock->opt[7] = 2;
		}
		if (format[*i] == 'l')
		{
			*i = *i + 1;
			if (format[*i] == 'l')
			{
				stock->opt[7] = 4;
				*i = *i + 1;
			}
			else
				stock->opt[7] = 3;
		}
	}
}

void	ft_handler_modifier2(char *format, t_stock *stock, int *i)
{
	if (format[*i] == 'j')
	{
		stock->opt[7] = 5;
		*i = *i + 1;
	}
	if (format[*i] == 'z')
	{
		stock->opt[7] = 6;
		*i = *i + 1;
	}
}

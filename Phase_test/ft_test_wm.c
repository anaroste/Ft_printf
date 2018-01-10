/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_wm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:22:05 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/10 17:50:39 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	if (strchr(argv[1], '%') == NULL)
	{
		write (1, argv[1], strlen(argv[1]));
		argc = strlen(argv[1]);
	}
	printf("\nret = %d\n", argc);
	return 0;
}

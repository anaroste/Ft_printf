/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 16:38:57 by anaroste          #+#    #+#             */
/*   Updated: 2018/01/25 16:43:00 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void		ft_putchar(const char c);
void		ft_putnbr(int n);
void		ft_putstr(char const *s);
void		ft_putstr_len(const char *str, int len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_itoa(int n);
char		*ft_llong_itoa(long long n);
char		*ft_ullong_itoa(unsigned long long nbr, int base);
char		*ft_custom_itoa(unsigned long long nbr, int base, char c);
size_t		ft_strlen(const char *s);
size_t		ft_strlen_c(const char *s, char c);

#endif

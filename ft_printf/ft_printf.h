/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:34:33 by youssama          #+#    #+#             */
/*   Updated: 2021/11/28 10:12:02 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putvoid(unsigned long long k);
int		ft_putnbrdecimal(int d);
int		ft_printf(const char *str, ...);
void	ft_putpurcentage(char c);
void	ft_putchar(char c);
int		ft_putstr(char *s);
int		calc(long long d);
int		ft_puttohexa(long long int x, char c);
int		calchexa(unsigned long long d);
int		ft_putunsigned(unsigned int l);

#endif

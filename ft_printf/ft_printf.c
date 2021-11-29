/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:12:14 by youssama          #+#    #+#             */
/*   Updated: 2021/11/28 10:15:21 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	affiche(char str, int *len, va_list arg)
{
	if (str == 'd' || str == 'i')
		*len = *len + ft_putnbrdecimal(va_arg(arg, int)) - 2;
	else if (str == 'c')
	{
		ft_putchar(va_arg(arg, int));
		*len = *len - 1;
	}
	else if (str == 's')
		*len = *len + ft_putstr(va_arg(arg, char *)) - 2;
	else if (str == 'p')
		*len = *len + ft_putvoid(va_arg(arg, unsigned long long));
	else if (str == 'x' || str == 'X')
		*len = *len + ft_puttohexa(va_arg(arg, unsigned int), str) - 2;
	else if (str == 'u')
		*len = *len + ft_putunsigned(va_arg(arg, unsigned int)) - 2;
	else if (str == '%')
	{
		*len = *len - 1;
		ft_putchar('%');
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	if (!*str)
		return (0);
	while (str[len])
		len++;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] != '\0')
				affiche(str[i++], &len, arg);
		}
		if (str[i] != '%' && str[i])
			ft_putchar(str[i++]);
	}
	va_end(arg);
	return (len);
}

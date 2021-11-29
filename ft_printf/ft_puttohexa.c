/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttohexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:31:01 by youssama          #+#    #+#             */
/*   Updated: 2021/11/28 09:31:34 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puttohexa(long long int x, char c)
{
	int	d;

	d = calchexa(x);
	if (x >= 16)
		ft_puttohexa(x / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[x % 16]);
	if (c == 'X')
		ft_putchar("0123456789ABCDEF"[x % 16]);
	return (d);
}
/*int main()
{
    ft_puttohexa(100);
}*/

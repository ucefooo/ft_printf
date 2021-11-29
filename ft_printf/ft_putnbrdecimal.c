/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrdecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:33:10 by youssama          #+#    #+#             */
/*   Updated: 2021/11/28 09:33:44 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrdecimal(int d)
{
	long long	s;

	s = d;
	if (s < 0)
	{
		ft_putchar('-');
		s *= -1;
	}
	if (s >= 10)
		ft_putnbrdecimal(s / 10);
	ft_putchar((s % 10) + 48);
	return (calc(d));
}
/*int main()
{
    ft_putdecimal(-154608451.20);
    printf("\n%d",-154608451.20);
}*/

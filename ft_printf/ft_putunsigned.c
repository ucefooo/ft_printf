/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youssama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 09:30:15 by youssama          #+#    #+#             */
/*   Updated: 2021/11/28 09:30:46 by youssama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int l)
{
	long int	u;

	u = l;
	if (u >= 10)
		ft_putunsigned(u / 10);
	ft_putchar(u % 10 + 48);
	return (calc(l));
}
/*int main()
{
    //ft_putunsigned(1000);
    ft_putunsigned(-1000);
    printf("\n%u",-1110);
}*/

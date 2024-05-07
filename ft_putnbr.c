/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:26:25 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/01 13:06:42 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_write(int n)
{
	char	c;

	if (n == -2147483648)
	{
		if ((write(1, "-2147483648", 11)) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if ((write(1, "-", 1)) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if ((ft_putnbr_write(n / 10)) == -1)
			return (-1);
	}
	c = (n % 10) + '0';
	if ((ft_putchar(c)) == -1)
		return (-1);
	return (1);
}

int	ft_putnbr(int n)
{
	unsigned int	length;
	int				nb;
	int				ret;

	nb = n;
	length = 1;
	if ( n < 0)
	{
		nb = -n;
		length++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		length++;
	}
	ret = ft_putnbr_write(n);
	if (ret == -1 || ret == 11)
		return (ret);
	return (length);
}
/*
#include <stdio.h>
int main()
{
	int length;

	length = ft_putnbr(-4442);
	printf("\nthe length of the number is %d", length);
}
*/

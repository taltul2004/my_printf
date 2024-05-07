/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:09:58 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/02 15:03:09 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int a)
{
	char	*hex_digits;
	int		length;
	char	digit;
	int		ret;

	length = 0;
	if (a > 0)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
	{
		ret = ft_puthex(n / 16, a);
		if (ret == -1)
			return (ret);
		length += ret;
	}
	digit = hex_digits[n % 16];
	if ((write(1, &digit, 1)) == -1)
		return (-1);
	length++;
	return (length);
}
/*
#include <stdio.h>
int main()
{
	int result;

	result = ft_puthex(453);
	printf("\nthe hex number length is %d", result);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:10:23 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:31 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int		length;
	char	digit;
	int		ret;

	length = 0;
	if (n > 9)
	{
		ret = ft_putunbr(n / 10);
		if (ret == -1)
			return (ret);
		length += ret;
	}
	digit = (n % 10) + '0';
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

	result = ft_putunbr(-1);
	printf("\nthe length of the int is %d", result);
}
*/

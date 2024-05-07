/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:11:28 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/03 09:40:31 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	check(char *hex_digits)
{
	if ((write(1, &hex_digits[0], 1)) == -1)
		return (-1);
	return (3);
}

int	ft_hexptr(unsigned long ptr)
{
	char		*hex_digits;
	int			length;
	char		buffer[16];
	int			index;

	length = 0;
	index = 0;
	hex_digits = "0123456789abcdef";
	if ((write(1, "0x", 2) == -1))
		return (-1);
	length += 2;
	if (ptr == 0)
		return (check(hex_digits));
	while (ptr > 0)
	{
		buffer[index++] = hex_digits[ptr % 16];
		ptr /= 16;
	}
	while (index > 0)
	{
		if ((write(1, &buffer[--index], 1) == -1))
			return (-1);
		length++;
	}
	return (length);
}
/*
#include <stdio.h>
int main()
 {
    int result;
	char *ptr = "hello";

    result = ft_hexptr((unsigned long)ptr);
	printf("\nthe hex number length is %d
 and the real address is %p", result, ptr);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:08:06 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/04 13:57:05 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if ((write(1, &c, 1)) == -1)
		return (-1);
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int result;

	result = ft_putchar('g');
	printf("\nchar returns %d", result);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:20:39 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/02 10:58:50 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	ret;

	i = 0;
	if (str == NULL)
	{
		ret = write(1, "(null)", 6);
		return (ret);
	}
	while (str[i] != '\0')
	{
		if ((write(1, &str[i], 1)) == -1)
			return (-1);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int length;

	length = ft_putstr("hello");
	printf("\nthe length of the string is %d", length);
}
*/

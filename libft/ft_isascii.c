/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:46:10 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/19 12:53:41 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int main(void)
{
	char ascii;
	int num;

	num = 80;
	ascii = num;
	printf("the number you gave is: %d\nis this ascii?:
 %d\nwhat is the ascii charecter: %c", num, ft_isascii('z'), ascii);
}
*/

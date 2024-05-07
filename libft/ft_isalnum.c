/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:28:27 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/19 18:09:22 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
int main(void)
{
	printf("is it a letter or a digit?: %d\n", ft_isalnum('6'));
	printf("is it a letter or a digit?: %d\n", ft_isalnum('A'));
	printf("is it a letter or a digit?: %d\n", ft_isalnum('z'));
	printf("is it a letter or a digit?: %d\n", ft_isalnum('!'));
}
*/

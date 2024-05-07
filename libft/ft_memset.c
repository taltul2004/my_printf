/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:51:48 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 12:34:44 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
	{
		*ptr++ = c;
	}
	return (b);
}
/*
#include <stdio.h>
int main(void)
{
	char str[20] = "hello world";

	ft_memset(str, '3', 2);
	printf("oh so this is memset!: %s", str);
	return(0);
}
*/

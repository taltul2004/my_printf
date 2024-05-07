/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:41:39 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 12:21:36 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	src_length = i;
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "Hello";
    char dst[19];
	char odst[19];
    int r;
	int or;

	r = ft_strlcpy(dst, str, 4);
	or = strlcpy(odst, str, 4);
	printf("my strlcpy, src: %s dst: %s, length %d\n", str, dst, r);
	printf("original strlcpy, src: %s dst: %s, length %d\n", str, odst, or);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:31:14 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/20 14:29:46 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	if (dstsize == 0)
	{
		return (src_length);
	}
	dst_length = ft_strlen(dst);
	if (dst_length >= dstsize)
	{
		return (src_length + dstsize);
	}
	dst = dst_length + dst;
	dstsize = dstsize - dst_length;
	while (*src && --dstsize)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (dst_length + src_length);
}
/*
#include <stdio.h>
int main(void)
{
	char first[30] = "this is";
	char last[30] = " a potentially long string";
	int r;
	
	printf("when you add %s and %s together..\n ", first, last);
	r = ft_strlcat(first, last, 2);
	printf("you will get %s\n but the total length is still %d", first, r);
}
*/

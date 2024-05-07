/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:09:02 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 10:35:39 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*pts;

	ptr = (unsigned char *)dst;
	pts = (unsigned char *)src;
	if (ptr == NULL && pts == NULL)
		return (NULL);
	while (n--)
	{
		*ptr++ = *pts++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	unsigned char src[20] = "hello";
	unsigned char dst[20] = "";

	ft_memcpy(dst, src, 5);
	printf("dst is now src: %s\n", dst);
}
*/

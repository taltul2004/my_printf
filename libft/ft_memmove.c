/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:59:54 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 10:50:49 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*pts;

	ptr = (unsigned char *) dst;
	pts = (unsigned char *) src;
	if (ptr == NULL && pts == NULL)
		return (NULL);
	if (dst > src && dst < src + len)
	{
		ptr = ptr + (len - 1);
		pts = pts + (len - 1);
		while (len--)
		{
			*ptr-- = *pts--;
		}
	}
	else
	{
		while (len--)
		{
			*ptr++ = *pts++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dst[20] = "hello";
	char odst[20] = "hello";

    ft_memmove(dst+1, dst, 5);
    printf("ft_memove: %s\n", dst);
	memmove(odst+1, odst, 5);
	printf("memove: %s\n", odst);
}
*/

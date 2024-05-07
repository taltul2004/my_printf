/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:07:23 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 12:54:27 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*ptr == target)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char str[20] = "hello";

    printf("%s", ft_memchr(str, 'e', 4));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:36:46 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 12:31:08 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("when they are equal = %d\n", ft_memcmp("Hello!", "Hello!", 6));
    printf("when s1 is lower then s2 = %d\n", ft_memcmp("Hello!", "Hollo!", 6));
    printf("when s1 is higher then s2 = %d\n", ft_memcmp("Holle!", "Hello!", 6));
}
*/

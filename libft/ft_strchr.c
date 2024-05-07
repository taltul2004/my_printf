/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:56:47 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 12:46:05 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
	{
		s++;
	}
	if (*s == (char)c || !c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
    char str[20] = "hello there";

    printf("%s", ft_strchr(str, 'o'));
}
*/

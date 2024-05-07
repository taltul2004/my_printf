/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:23:27 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 13:07:43 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinstr;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	joinstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!joinstr)
		return (NULL);
	while (s1[i])
	{
		joinstr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		joinstr[j++] = s2[i++];
	}
	joinstr[j] = '\0';
	return (joinstr);
}
/*
#include <stdio.h>
int main()
{
	char str1[20] = "hello ";
	char str2[20] = "there";
	
	printf("the joined string is: %s", ft_strjoin(str1, str2));
	return (0);
}
*/

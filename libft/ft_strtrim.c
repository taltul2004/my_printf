/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:51:48 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 09:53:33 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	if (start == end + 1)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	trim = ft_substr(s1, start, end - start + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
/*
#include <stdio.h>
int main()
{
		printf("the trimed string is %s", ft_strtrim("##he##llo##", "##"));
}
*/

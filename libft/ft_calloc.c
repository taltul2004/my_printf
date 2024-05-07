/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:26:54 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/27 12:13:56 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (!count && !size)
		return (ft_calloc(1, 1));
	total_size = count * size;
	if ((count != 0 && total_size / count != size) || total_size > 2147483648)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int *ptr;
	int i;
	int n;
	
	n = ft_atoi(argv[1]);
	printf("Enter Number of elements: %d\n", n);
	ptr = (int*)ft_calloc(n, sizeof(int));
	if (ptr == NULL)
	{
		printf("memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("memory successfully allocated using calloc.\n");
		for (i = 0; i < n; ++i)
		{
			ptr[i] = i + 1;
		}
		printf("the elements of the array are: ");
		for (i = 0; i < n; ++i)
		{
			printf("%d ", ptr[i]);
		}
	}
	return (0);
}
*/

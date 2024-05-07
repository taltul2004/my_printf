/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:33:37 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 13:25:20 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode != NULL)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return (newnode);
}
/*
#include <stdio.h>
int main()
{
	int data = 42;
	t_list* intlist = ft_lstnew(&data);
	if (intlist != NULL)
	{
		printf("created a node with content:
 %d\n", *(int*)(intlist->content));
		free (intlist);
	}
	else
	{
		printf("memory allocation faild");
	}
}
*/

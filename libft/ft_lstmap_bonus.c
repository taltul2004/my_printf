/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:43:02 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 09:34:33 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	newlst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&newlst, del);
			if (del)
				del(new_content);
			return (NULL);
		}
		if (!newlst)
			newlst = new_node;
		else
			current->next = new_node;
		current = new_node;
		lst = lst->next;
	}
	return (newlst);
}

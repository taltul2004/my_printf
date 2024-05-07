/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:45:24 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/23 11:42:49 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	void	*last_node;

	last_node = NULL;
	while (lst != NULL)
	{
		last_node = lst;
		lst = lst->next;
	}
	return (last_node);
}

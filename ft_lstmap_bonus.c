/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:03 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/08 17:11:45 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nodes;
	t_list	*temp;

	head = NULL;
	if (!f || !del)
		return (NULL);
	while (lst != NULL)
	{
		nodes = ft_lstnew(f(lst->content));
		if (!nodes)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (!head)
			head = nodes;
		else
			temp->next = nodes;
		temp = nodes;
		lst = lst->next;
	}
	return (head);
}

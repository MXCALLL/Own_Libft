/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:03 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/06 18:01:06 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nodes;
	t_list	*temp;

	if(!f || !del)
		return(NULL);
	head = NULL;
	while (lst != NULL)
	{
		nodes = ft_lstnew(f(lst->content));
		if (nodes == NULL)
		{
			ft_lstdelone(nodes->content,del);
			return (NULL);
		}
		if (head == NULL)
			head = nodes;
		else
			temp->next = nodes;
		temp = nodes;
		lst = lst->next;
	}
	return (head);
}

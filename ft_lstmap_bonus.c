/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:26:03 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:15 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
	free(content);
}

void *to_upper(char *s)
{
	int i = 0;
	while(s[i])
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nodes;
	t_list	*temp;

	head = NULL;
	if (!f || !del || !lst)
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
#include <stdio.h>

int main()
{
	t_list *node1 = ft_lstnew(ft_strdup("Hello"));
	t_list *node2 = ft_lstnew(ft_strdup("Me"));

	node1->next = node2;

	t_list *head = node1;
	t_list *map = ft_lstmap(head,(void *)to_upper,del);

	t_list *current = map;
	while(current)
	{
		printf("%s\n",(char *)current->content);
		current = current->next;
	}
}

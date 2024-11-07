/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:38:56 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/06 17:58:18 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void del(void *content)
// {
// 	if (content == NULL)
// 		return ;
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	lst->next = NULL;
	free(lst);
}


// int main()
// {
// 	t_list *node1 = ft_lstnew("Hello");
// 	t_list *node2 = ft_lstnew("Hi");
// 	t_list *node3 = ft_lstnew("World");

// 	node1->next = node2;
// 	node2->next = node3;

// 	printf("%s\n",(char *)node2->content);
// 	ft_lstdelone(node2,del);
// 	printf("%s\n",(char *)node2->content);
// 	node1->next = node3;
// 	t_list *current = node1;
// 	while(current != NULL)
// 	{
// 		printf("%s\n",(char *)current->content);
// 		current = current->next;
// 	}
// }
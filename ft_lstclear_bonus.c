/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:39:09 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/08 17:46:22 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*current;

	current = *lst;
	while (current != NULL)
	{
		temp = current->next;
		if (current->content != NULL)
			del(current->content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}

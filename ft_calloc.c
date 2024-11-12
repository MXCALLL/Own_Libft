/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:08 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/12 16:35:30 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		totalby;
	void		*ptr;

	totalby = count * size;
	if (count != 0 && totalby / count != size)
		return (NULL);
	ptr = malloc(totalby);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, totalby);
	return (ptr);
}

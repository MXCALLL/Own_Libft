/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:08 by muidbell          #+#    #+#             */
/*   Updated: 2024/10/28 15:59:37 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		totalby;
	void		*ptr;

	if (count == 0 || size == 0)
		return (malloc(1));
	totalby = count * size;
	if (totalby / count != size)
		return (NULL);
	ptr = malloc(totalby);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, totalby);
	return (ptr);
}

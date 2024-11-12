/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:34:30 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/12 17:55:35 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (n == 0 || dest == src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			dest_ptr[n] = src_ptr[n];
		}
	}
	return (dest);
}

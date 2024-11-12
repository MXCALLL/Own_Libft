/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:44:52 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/09 16:24:27 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		src_length;
	size_t		dest_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = ft_strlen(dest);
	if (size <= dest_length)
		return (src_length + size);
	i = 0;
	while (src[i] != '\0' && (dest_length + i + 1) < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (src_length + dest_length);
}

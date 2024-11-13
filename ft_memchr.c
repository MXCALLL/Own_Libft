/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:25:24 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/13 13:39:59 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_ptr;

	if (n == 0)
		return (NULL);
	s_ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return ((void *)&s_ptr[i]);
		i++;
	}
	return (NULL);
}

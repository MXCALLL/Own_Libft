/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:12:00 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/09 15:02:09 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			i;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = (unsigned char)c;
		i++;
	}
	return (s_ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:40:27 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/13 11:37:32 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*total_alloc;
	size_t		s1_len;
	size_t		s2_len;

	s1_len = 0;
	s2_len = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	total_alloc = malloc(s1_len + s2_len + 1);
	if (total_alloc == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_memcpy(total_alloc, s1, s1_len);
	if (s2 != NULL)
		ft_memcpy(total_alloc + s1_len, s2, s2_len);
	total_alloc[s1_len + s2_len] = '\0';
	return (total_alloc);
}

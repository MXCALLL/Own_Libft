/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:02:56 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/13 11:19:50 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		s2_len;

	if (*s2 == '\0')
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0' && i + j < len)
		{
			if (s1[i + j] != s2[j])
				break ;
			j++;
			if (j == s2_len)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

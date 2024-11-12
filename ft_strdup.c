/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:59:59 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/12 21:30:24 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_ptr;
	int		len;

	len = ft_strlen(s);
	s_ptr = (char *)malloc(len + 1);
	if (s_ptr == NULL)
		return (NULL);
	while (*s != 0)
		*s_ptr++ = *s++;
	*s_ptr = '\0';
	return (s_ptr - len);
}

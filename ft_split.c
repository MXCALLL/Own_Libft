/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:51:43 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/07 21:55:49 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		start;
	size_t		end;
	size_t		count;
	size_t		word_index;

	if (!s)
		return (NULL);
	count = count_word(s,c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	start = 0;
	word_index = 0;
	while(s[start] != '\0' && word_index < count)
	{
		while(s[start] == c)
			start++;
		end = start;
		while(s[end] != '\0' && s[end] != c)
			end++;
		if (start < end)
		{
			str[word_index] = ft_substr(s,start,end-start);
			if(!str[word_index])
				return (NULL);
			word_index++;
			start = end;
		}
		else
			start++;
	}
	str[word_index] = NULL;
	return (str);
}
// int main()
// {
// 	char *s = "$Hello$$World";
// 	char **result = ft_split(s, '$');

// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("word{%d}: %s\n",i,result[i]);
// 	}

// }
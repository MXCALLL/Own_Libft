/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:17:34 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/13 13:32:10 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(int d)
{
	int		i;

	i = 0;
	if (d == 0)
		return (1);
	if (d < 0)
		d *= -1;
	while (d != 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count(n);
	if (n < 0)
		i += 1;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		n *= (-1);
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

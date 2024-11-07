/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:48:11 by muidbell          #+#    #+#             */
/*   Updated: 2024/11/07 18:21:17 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	check_overflow(long result, int sign, int next_digit)
{
	if (result > LONG_MAX || (result ==  LONG_MAX && next_digit > 7))
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return(1);
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	int			overflow_check;
	int			next_digit;
	long		result;

	sign = 1;
	result = 0;
	while ((*nptr == ' ') || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		next_digit = *nptr - '0';
		overflow_check = check_overflow(result, sign, next_digit);
		if (overflow_check != 1)
			return overflow_check;
		result = result * 10 + next_digit;
		nptr++;
	}
	return ((int)(result * sign));
}

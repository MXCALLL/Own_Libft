/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MXCALL <MXCALL@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:37:24 by MXCALL            #+#    #+#             */
/*   Updated: 2024/10/06 23:06:12 by MXCALL           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);

#endif
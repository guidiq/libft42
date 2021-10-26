/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:13:58 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/23 18:48:03 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	x;

	x = 0;
	st = (char *)s;
	while (x < n)
	{
		if ((unsigned char)st[x] == (unsigned char)c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}

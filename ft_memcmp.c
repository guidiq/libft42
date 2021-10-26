/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:06 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/23 19:26:16 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	x;

	x = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (x < n)
	{
		if (st1[x] != st2[x])
			return ((unsigned char)st1[x] - (unsigned char)st2[x]);
		x++;
	}
	return (0);
}

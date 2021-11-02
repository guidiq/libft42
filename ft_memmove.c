/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:34:35 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/02 09:00:55 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				x;

	d = dst;
	s = src;
	if (dst == src)
		return (dst);
	if (d > s)
	{
		x = len;
		while (x-- > 0)
			d[x] = s[x];
	}
	else
	{
		x = 0;
		while (x < len)
		{
			d[x] = s[x];
			x++;
		}
	}
	return (dst);
}

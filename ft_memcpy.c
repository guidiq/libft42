/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:15:44 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/23 14:18:35 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*s;
	char	*d;

	x = 0;
	s = (char *)src;
	d = (char *)dst;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}

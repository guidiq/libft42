/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:22 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/24 17:09:51 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	if (*needle == '\0' || (!haystack))
		return ((char *)haystack);
	x = 0;
	while (len > x && haystack[x])
	{
		y = 0;
		while (needle[y] && haystack[x + y] && needle[y] == \
			haystack[x + y] && x + y < len)
			y++;
		if (!needle[y])
			return ((char *)&haystack[x]);
		if (!haystack[x + y] || x + y == len)
			return ((char *)(void *)0);
		x++;
	}
	return ((char *)(void *)0);
}

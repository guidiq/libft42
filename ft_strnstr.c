/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:22 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/02 09:31:19 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	x;
	unsigned int	y;

	if (needle[0] == '\0')
		return ((char *)haystack);
	x = 0;
	while (len > x && haystack[x] != '\0')
	{
		y = 0;
		while (haystack[x + y] == needle[y] && (x + y) < len)
		{
			if (needle[y + 1] == '\0')
				return ((char *)&haystack[x]);
			y++;
		}
		x++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:12 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/24 15:14:28 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;

	x = 0;
	while (*(s + x))
	{
		if (*(s + x) == c)
			return ((char *)s + x);
		x++;
	}
	if (!c && *(s + x) == '\0')
		return ((char *)s + x);
	return (NULL);
}

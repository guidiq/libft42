/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:56:18 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/24 14:54:04 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	x;

	if (s1 == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (s == NULL)
		return (NULL);
	x = 0;
	while (*(s1 + x))
	{
		s[x] = *(s1 + x);
		x++;
	}
	s[x] = 0;
	return (s);
}

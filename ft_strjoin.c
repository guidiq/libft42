/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:00 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/25 16:56:11 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return ((char *)0);
	while (s1[x])
	{
		str[y++] = s1[x];
		x++;
	}
	x = 0;
	while (s2[x])
	{
		str[y++] = s2[x];
		x++;
	}
	str[y] = 0;
	return (str);
}

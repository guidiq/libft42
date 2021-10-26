/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:19 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/25 17:47:34 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	char	*str;

	str = 0;
	if (!s1 || !set)
		return ((char *)0);
	x = 0;
	y = ft_strlen(s1);
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (s1[y - 1] && ft_strchr(set, s1[y - 1]) && y > x)
		y--;
	str = (char *)malloc(sizeof(char) * (y - x + 1));
	if (str)
		ft_strlcpy(str, &s1[x], y - x + 1);
	return (str);
}

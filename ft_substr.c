/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:14:23 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/25 16:24:49 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	x;
	char			*str;

	if (!s)
		return ((char *)0);
	x = 0;
	while (s[x])
		x++;
	if (start > x)
		len = 0;
	if (len > x - start)
		len = x - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	x = 0;
	while (x < len)
	{
		str[x] = s[start + x];
		x++;
	}
	str[x] = 0;
	return (str);
}

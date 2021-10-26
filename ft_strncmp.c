/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:18 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/24 18:27:54 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	x;

	x = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (x < n)
	{
		if (str1[x] != str2[x])
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
		x++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:56:18 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/02 09:36:00 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	x;

	x = ft_strlen(s1) + 1;
	if (s1 == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(char) * x);
	if (s == NULL)
		return (NULL);
	ft_memcpy(s, s1, x);
	return (s);
}

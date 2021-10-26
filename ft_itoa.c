/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:47 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/26 13:54:42 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_num_len(int num)
{
	size_t	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*res;

	len = ft_num_len(n);
	num = n;
	if (!(res = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	if (num == 0)
		res[0] = '0';
	res[len--] = '\0';
	while (num)
	{
		res[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (res);
}

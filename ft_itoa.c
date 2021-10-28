/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:36:47 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/26 17:56:32 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*res;

	num = ft_len(n);
	res = (char *)malloc(sizeof(char) * (num + 1));
	if (!res)
		return (res);
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res[num] = '\0';
	if (n < 0)
		res[0] = '-';
	while (n != 0)
	{
		res[--num] = (n % 10) * (2 * (n > 0) - 1) + '0';
		n = n / 10;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:13:48 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/24 19:44:44 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	x;

	res = 0;
	sign = 1;
	x = 0;
	while (*(str + x) == 32 || (*(str + x) >= 9 && *(str + x) <= 13))
		x++;
	if (*(str + x) == '-')
		sign = -1;
	if (*(str + x) == '-' || *(str + x) == '+')
		x++;
	while (*(str + x) >= '0' && *(str + x) <= '9')
	{
		res = (res * 10) + (*(str + x) - '0');
		x++;
	}
	return (res * sign);
}

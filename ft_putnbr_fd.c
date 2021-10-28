/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:37:54 by cshannon          #+#    #+#             */
/*   Updated: 2021/10/27 11:28:00 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pnb_fd(long pnb, int fd)
{
	if (pnb > 9)
		ft_pnb_fd(pnb / 10, fd);
	ft_putchar_fd((pnb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	pnb;

	pnb = n;
	if (pnb < 0)
	{
		ft_putchar_fd('-', fd);
		pnb *= -1;
	}
	ft_pnb_fd(pnb, fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:32:25 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/01 16:12:40 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		x = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = x;
	}
}

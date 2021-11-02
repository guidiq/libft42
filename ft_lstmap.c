/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:34:44 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/01 17:10:05 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*fst;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	fst = NULL;
	while (lst)
	{
	new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (fst)
			{
				new = fst->next;
				(*del)(fst->content);
				free (fst);
				fst = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&fst, new);
		lst = lst->next;
	}
	return (fst);
}

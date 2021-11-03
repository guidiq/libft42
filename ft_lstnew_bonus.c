/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshannon <cshannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:23:28 by cshannon          #+#    #+#             */
/*   Updated: 2021/11/02 20:00:09 by cshannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elm;

	new_elm = (t_list *)malloc(sizeof(*new_elm));
	if (!new_elm)
		return (NULL);
	new_elm->content = content;
	new_elm->next = NULL;
	return (new_elm);
}

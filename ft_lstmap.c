/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuchen <chuchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:53:00 by chuchen           #+#    #+#             */
/*   Updated: 2023/11/27 16:31:54 by chuchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_ptrofhead;

	new_ptrofhead = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_ptrofhead, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new_ptrofhead, new_list);
		lst = lst->next;
	}
	return (new_ptrofhead);
}

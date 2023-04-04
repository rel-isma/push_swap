/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:58:52 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/24 03:59:15 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*lstnew;

	if (!lst || !f || !del)
		return (NULL);
	lstnew = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&lstnew, new_node);
		lst = lst->next;
	}
	return (lstnew);
}

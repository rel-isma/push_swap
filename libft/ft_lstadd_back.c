/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:11:03 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/22 12:11:25 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_last;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		new_last = ft_lstlast(*lst);
		new_last->next = new;
		return ;
	}
	*lst = new;
}

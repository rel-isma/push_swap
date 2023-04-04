/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:38:52 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/23 17:39:43 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*help;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		help = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = help;
	}
}

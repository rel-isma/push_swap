/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:56:31 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/07 13:37:48 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*y;

	y = b;
	while (len > 0)
	{
		*y = (unsigned char)c;
		y++;
		len--;
	}
	return (b);
}

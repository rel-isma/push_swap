/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:42:37 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/27 14:31:12 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_help;
	const unsigned char	*src_help;

	if (dst == 0 && src == 0)
		return (NULL);
	if (src >= dst)
		return (ft_memcpy(dst, src, len));
	while (len-- > 0)
	{
		src_help = src + len;
		dst_help = dst + len;
		(*dst_help--) = (*src_help--);
	}
	return (dst);
}

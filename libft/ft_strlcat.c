/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:39:51 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/19 19:26:50 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	if (dst == 0 && dstsize == 0)
		return (ft_strlen(src));
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	i = 0;
	if (lend >= dstsize)
		return (lens + dstsize);
	if (dstsize == 0)
		return (lens);
	while (src[i] && (i < (dstsize - lend - 1)))
	{
		dst[lend + i] = src[i];
			i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}

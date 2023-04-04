/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:47:46 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/19 19:22:56 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_cmp;
	const unsigned char	*s2_cmp;
	size_t				i;

	s1_cmp = ((unsigned char *)s1);
	s2_cmp = ((unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (s1_cmp[i] != s2_cmp[i])
			return (s1_cmp[i] - s2_cmp[i]);
		i++;
	}
	return (0);
}

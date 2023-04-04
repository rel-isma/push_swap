/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:10:42 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/19 10:01:59 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str2[0] == '\0')
		return (((char *)str1));
	if ((len == 0) || (str1[0] == '\0'))
		return (NULL);
	while (str1[i] && len > 0)
	{
		j = 0;
		while (str1[i + j] && (str1[i + j] == str2[j]) && len > 0)
		{
			if (str2[j + 1] == '\0')
				return (&((char *)str1)[i]);
			j++;
			len--;
		}
		len += j;
		i++;
		len--;
	}
	return (NULL);
}

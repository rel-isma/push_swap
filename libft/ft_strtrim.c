/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:58:49 by rel-isma          #+#    #+#             */
/*   Updated: 2022/10/19 02:22:25 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*cstr;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1) - 1;
	while (len > 0 && skip(set, s1[len]) == 1)
		len--;
	while (*s1 && skip(set, *s1) == 1 && 0 <= len)
	{
		s1++;
		len--;
	}
	cstr = ft_substr(s1, 0, len + 1);
	return (cstr);
}

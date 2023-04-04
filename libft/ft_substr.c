/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:34:17 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/25 15:28:07 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	const char	*scpy;
	size_t		len_s;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len_s = ft_strlen(&s[start]);
	if (len_s < len)
		len = len_s;
	scpy = malloc((len + 1) * sizeof(char));
	if (!scpy)
		return (NULL);
	s = s + start;
	i = 0;
	while (s[i] != '\0' && len > 0)
	{
		((char *)scpy)[i] = s[i];
		i++;
		len--;
	}
	((char *)scpy)[i] = '\0';
	return ((char *)scpy);
}

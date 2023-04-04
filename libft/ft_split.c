/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:21:25 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/25 15:27:46 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nomber_of_words(char const *str, char c)
{
	int		i;
	int		j;
	int		n_of_w;

	i = 0;
	j = 0;
	n_of_w = 0;
	while (str[i])
	{
		if (str[i] != c && j == 0)
		{
			j = 1;
			n_of_w++;
		}
		else if (str[i] == c)
		{
			j = 0;
		}
		i++;
	}
	return (n_of_w);
}

static	char	**ft_free(char **p, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(p[i]);
		p[i] = 0;
		i++;
	}
	free(p);
	p = 0;
	return (NULL);
}

static void	ft_int(int *skip, int *len, int *j)
{
	*skip = 0;
	*len = 0;
	*j = 0;
}

static char	**ft_split2(char const *str, char **p, char c, int num_words)
{
	int		skip;
	int		len;
	int		j;

	ft_int(&skip, &len, &j);
	while (j < num_words)
	{
		if (*str != c && skip == 0)
		{
			skip = 1;
			len = 0;
		}
		else if ((*str == c || *str == '\0') && skip == 1)
		{
			p[j] = ft_substr(str - len, 0, len);
			if (!p[j])
				return (ft_free(p, j));
			skip = 0;
			j++;
		}
		len++;
		str++;
	}
	return (&p[j]);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	**tmp;
	int		number_word;

	if (!s)
		return (NULL);
	number_word = nomber_of_words(s, c);
	p = ft_calloc((number_word + 1), sizeof(char *));
	if (!p)
		return (NULL);
	tmp = ft_split2(s, p, c, number_word);
	if (tmp == NULL)
		return (NULL);
	*tmp = 0;
	return (p);
}

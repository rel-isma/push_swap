/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:49:17 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/28 06:13:32 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_line(char *help)
{
	size_t	len;
	char	*str;

	len = 0;
	if (!help)
		return (NULL);
	if (ft_strchr(help, '\n'))
	{
		while (help[len] != '\n')
			len++;
		str = ft_substr(help, 0, len + 1);
		return (str);
	}
	return (help);
}

char	*ft_line_next(char *help)
{
	size_t	len2;
	char	*str2;

	len2 = 0;
	if (!help)
		return (NULL);
	if (ft_strchr(help, '\n'))
	{
		while (help[len2] != '\n')
			len2++;
		if (help[len2 + 1] == '\0')
		{
			free(help);
			return (NULL);
		}
		str2 = help;
		str2 = ft_strdup(&str2[len2 + 1]);
		free(help);
		return (str2);
	}
	return (NULL);
}

int	read_and_read(int fd, char **help)
{
	size_t	read_c;
	char	*tmp;
	char	buf[BUFFER_SIZE + 1];

	read_c = 1;
	while (read_c && !ft_strchr(*help, '\n'))
	{
		read_c = read(fd, buf, BUFFER_SIZE);
		if (read_c <= 0)
			return (read_c);
		buf[read_c] = '\0';
		tmp = *help;
		*help = ft_strjoin(*help, buf);
		free(tmp);
	}
	return (read_c);
}

char	*get_next_line(int fd)
{
	static char	*help;
	char		*line;
	size_t		read_c;

	if (fd < 0 || read(fd, NULL, 0) < 0)
	{
		free(help);
		help = NULL;
		return (NULL);
	}
	read_c = read_and_read(fd, &help);
	if (read_c <= 0 && !help)
		return (NULL);
	if (help && !ft_strchr(help, '\n'))
	{
		line = help;
		help = NULL;
		return (line);
	}
	line = ft_line(help);
	help = ft_line_next(help);
	return (line);
}

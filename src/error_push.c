/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 01:43:35 by rel-isma          #+#    #+#             */
/*   Updated: 2023/03/30 00:27:41 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_d_helper(char ***str, int j, int l, int tmp)
{
	while (str[j])
	{
		while (str[j][l])
		{
			if (tmp == ft_atoi(str[j][l]))
				return (1);
			l++;
		}
		l = 0;
		j++;
	}
	return (0);
}

void	ft_check_error(char ***str, int i, int j)
{
	while (str[i][j] != NULL)
	{
		if (chek_no_nbr(str[i][j]))
		{
			str[i + 1] = NULL;
			ft_free(str);
			write(2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
}

int	check_d(char ***str)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	tmp;

	i = 0;
	while (str[i])
	{
		k = 0;
		while (str[i][k])
		{
			tmp = ft_atoi(str[i][k]);
			j = i;
			l = k + 1;
			if (ft_check_d_helper(str, j, l, tmp))
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

void	error_push(int argc, char *argv[])
{
	char	***str;
	int		i;
	int		j;

	i = 0;
	str = malloc(sizeof(char **) * (argc));
	if (!str)
		return ;
	while (i < argc - 1)
	{
		j = 0;
		str[i] = ft_split(argv[i + 1], ' ');
		if (str[i][j] == NULL)
			print_error();
		ft_check_error(str, i, j);
		i++;
	}
	str[i] = NULL;
	if (check_d(str))
	{
		ft_free(str);
		write(2, "Error\n", 6);
		exit(1);
	}
	ft_free(str);
}

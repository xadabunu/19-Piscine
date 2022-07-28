/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:10:57 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/16 22:39:35 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char **tab)
{
	int		i;
	int		j;
	int		ind_min;
	char	*tmp;

	i = 1;
	while (tab[i])
	{
		j = i + 1;
		ind_min = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[ind_min], tab[j]) > 0)
				ind_min = j;
			++j;
		}
		if (i != ind_min)
		{
			tmp = tab[i];
			tab[i] = tab[ind_min];
			tab[ind_min] = tmp;
		}
		++i;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		++i;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	(void) argc;
	ft_sort_tab(argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
	return (0);
}

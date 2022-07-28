/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:34:37 by flweynan          #+#    #+#             */
/*   Updated: 2022/07/16 19:33:19 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	fill_sides(char **tab, char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		while (i < 5)
		{
			tab[i][0] = *str;
			str++;
			i++;
		}
		i = 1;
		while (i < 5)
		{
			tab[i][5] = *str;
			str++;
			i++;
		}
	}
}

void	fill_x(char **tab)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			tab[i][j] = 'x';
			j++;
		}
		i++;
		j = 1;
	}
}

char	**tab_init(char *str, char **tab)
{
	int		j;

	j = 1;
	while (*str)
	{
		while (j < 5)
		{
			tab[0][j] = *str;
			str++;
			j++;
		}
		j = 1;
		while (j < 5)
		{
			tab[5][j] = *str;
			str++;
			j++;
		}
		fill_sides(tab, str);
		fill_x(tab);
	}
	return (tab);
}

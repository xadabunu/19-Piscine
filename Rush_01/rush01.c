/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lswaans <lswaans@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:51:31 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 12:20:59 by lswaans          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <unistd.h>
#include <stdlib.h>

void	print_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		write(1, &tab[i][j], 1);
		++j;
		while (j < 6)
		{
			write(1, " ", 1);
			write(1, &tab[i][j], 1);
			++j;
		}
		++i;
		j = 0;
	}
}

int	sub_solve(char **tab, int x, int y)
{
	char	opt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	opt = '1';
	while (opt < '5')
	{
		if (!check_double(tab, x, y, opt))
		{
			tab[i][j] = opt;
			if (solve(tab))
			{
				print_tab(tab);
				return (1);
			}
			else
				tab[i][j] = 'x';
		}
		++opt;
	}
	return (0);
}

int	solve(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++i < 5)
	{
		while (++j < 5)
		{
			if (tab[i][j] == 'x')
			{
				sub_solve(tab, i, j);
			}
		}
		j = 0;
	}
	write(1, "Error", 1);
	return (0);
}

int	rush( char *str)
{
	char	*values;
	char	**grid;
	int		i;

	i = 0;
	grid = malloc(6 * sizeof *grid);
	while (i < 6)
	{
		grid[i] = malloc(6 * sizeof *grid[i]);
		i++;
	}
	values = check_input(str);
	if (values == 0)
	{
		write(1, "Error", 5);
		return (1);
	}
	tab_init(values, grid);
	solve(grid);
	i = 0;
	while (i < 6)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return (0);
}

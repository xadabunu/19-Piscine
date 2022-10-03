/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:58:28 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/15 11:27:37 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	print_sequence(char **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			if (grid[i][j] == '1')
			{
				c = 48 + j;
				write(1, &c, 1);
			}
			++j;
		}
		++i;
		j = 0;
	}
}

int	check_pos(char **grid,int column, int line)
{
	int	i;

	i = 0;
	while (column + i < 10)
	{
		if (grid[line][column + i] == '1')
			return (0);
		++i;
	}
	i = 0;
	while (line + i < 10)
	{
		if (grid[line + i][column] == '1')
			return (0);
		++i;
	}
	i = 0;
	while (line + i < 10 && column + i < 10)
	{
		if (grid[line + i])
	}
}
*/

int	ft_solver(int grid[][], int column, int column)
{
	while (column < 10)
	{
		while (line < 10)
		{
			if (check_pos && line == 10)
			{
				grid [column][line];
				print_sequence(grid);
			}
			else
			{
				ft_solver(grid, )
			}
		}
		++line;
	}
	++column;
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10][10];

	ft_solver(grid, 0, 0);
}

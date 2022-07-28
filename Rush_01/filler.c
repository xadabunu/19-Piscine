/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:43:07 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 12:56:36 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	filler_1_top_bottom(char **tab, int line, int column)
{
	if (line == 0)
	{
		if (tab[1][column] == 'x')
			tab[1][column] = '4';
		else
		{
			write(1, "Error", 5);
			return (-1);
		}
	}
	if (line == 5)
	{
		if (tab[4][column] == 'x')
			tab[4][column] == '4';
	}
	else
	{
		write(1, "Error", 5);
		return (-1);
	}
	return (0);
}

int	filler_1_sides(char **tab, int line, int column)
{
	if (column == 0)
	{
		if (tab[line][1] == 'x')
			tab[line][1] = '4';
		else
		{
			write(1, "Error", 5);
			return (-1);
		}
	}
	if (column == 5)
	{
		if (tab[line][4] == 'x')
			tab[line][4] == '4';
	}
	else
	{
		write(1, "Error", 5);
		return (-1);
	}
	return (0);
}

int	filler_4_top_bottom(char **tab, int line, int column)
{
	int i;

	i = 0;
	if (!empty_column(tab, column))
	{
		write(1, "Error", 5);
		return (-1);
	}
	if (line == 0)
	{
		while (++i < 5)
			tab[i][column] = '0' + i; 
	}
	else if (line == 5)
	{
		while (++i < 5)
			tab[5 - i][column] = '0' + i;
	}
	return (1);
}

int	filler_4_sides(char **tab, int line, int column)
{
	int	i;

	i = 0;
	if (!empty_line(tab, line))
	{
		write(1, "Error", 5);
		return (-1);
	}
	if (column == 0)
	{
		while (++i < 5)
			tab[line][i] = '0' + i;
	}
	else if (line == 5)
	{	
		while (++i < 5)
			tab[line][5 - i] = '0' + i;
	}
}

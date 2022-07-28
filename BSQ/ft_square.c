/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:14:54 by hdero             #+#    #+#             */
/*   Updated: 2022/07/27 20:06:57 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_is_square_possible(char **map, t_sqr	square, char *tab)
{
	int		i;
	int		j;
	char	good_char;

	i = 0;
	good_char = tab[0];
	while (map[square.y + i] && i < square.size)
	{
		j = 0;
		while (map[square.y + i][square.x + j] && j < square.size)
		{
			if (map[square.y + i][square.x + j] != good_char)
			{
				free(tab);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(tab);
	if (i == square.size && j == square.size)
		return (1);
	return (0);
}

t_sqr	ft_init_square(int x, int y, int size)
{
	t_sqr	square;

	square.x = x;
	square.y = y;
	square.size = size;
	return (square);
}

t_sqr	ft_find_best_square(char **map, char *file, int i, int j)
{
	t_sqr	b_square;
	t_sqr	n_square;
	int		size_test;

	b_square = ft_init_square(0, 0, 0);
	n_square = ft_init_square(0, 0, 0);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			size_test = b_square.size + 1;
			n_square = ft_init_square(j, i, size_test);
			while (ft_is_square_possible(map, n_square, ft_char_tab(file)))
			{
				b_square = ft_init_square(j, i, size_test);
				size_test++;
				n_square = ft_init_square(b_square.x, b_square.y, size_test);
			}
			j++;
		}
		i++;
	}
	return (b_square);
}

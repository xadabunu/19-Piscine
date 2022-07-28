/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:37:24 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/27 18:07:07 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_map_create(char **map, char *file, int nb_lines)
{
	int		fd;
	int		ret;
	int		i;
	int		j;
	char	reading;

	reading = 0;
	i = 0;
	ret = -1;
	fd = open(file, O_RDONLY);
	while (reading != '\n')
		ret = read(fd, &reading, 1);
	while (i < nb_lines)
	{
		j = 0;
		ret = read(fd, &reading, 1);
		while (ret != 0 && reading != '\n')
		{
			map[i][j++] = reading;
			ret = read(fd, &reading, 1);
		}
		i++;
	}
	close(fd);
	return (map);
}

char	**ft_map_malloc(char *file, int nb_lines, int len)
{
	int		fd;
	int		ret;
	char	reading;
	char	**map;

	reading = 0;
	map = NULL;
	map = ft_mymalloc(map, nb_lines);
	fd = open(file, O_RDONLY);
	while (reading != '\n')
		ret = read(fd, &reading, 1);
	ret = read(fd, &reading, 1);
	while (reading != '\n')
	{
		ret = read(fd, &reading, 1);
		len++;
	}
	ft_malloc_all(map, nb_lines, len);
	close(fd);
	return (map);
}

void	ft_map_show(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_map_draw(char **map, t_sqr square, char *file)
{
	int		i;
	int		j;
	char	filler_char;

	i = 0;
	filler_char = ft_getter(file, GET_FILLER);
	while (map[i + square.y] && i < square.size)
	{
		j = 0;
		while (map[i + square.y][j + square.x] && j < square.size)
		{
			map[i + square.y][j + square.x] = filler_char;
			j++;
		}
		i++;
	}
}

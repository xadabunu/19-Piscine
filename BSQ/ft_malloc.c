/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:53:38 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/27 19:53:26 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_myfree(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		free(map[i]);
		++i;
	}
	free(map);
}

char	**ft_mymalloc(char **map, int size)
{
	map = malloc(sizeof(*map) * (size + 1));
	if (!map)
		exit(0);
	return (map);
}

void	ft_malloc_all(char **map, int size, int len)
{
	int	i;

	i = 0;
	while (i < size)
	{
		map[i] = malloc(sizeof(*map[i]) * (len + 1));
		if (!map[i])
		{
			ft_myfree(map);
			exit(0);
		}
		++i;
	}
	map[i] = NULL;
}

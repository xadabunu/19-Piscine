/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:37:35 by hdero             #+#    #+#             */
/*   Updated: 2022/07/27 20:24:25 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	t_sqr	final_square;
	char	**map;
	int		i;
	int		lines;

	i = 1;
	while (argv[i])
	{
		if (!ft_file_is_valid(argv[i]))
			write(2, "map error\n", 10);
		else
		{
			lines = ft_getlines(argv[i]);
			map = ft_map_malloc(argv[i], lines, ft_getlen(argv[i]));
			map = ft_map_create(map, argv[i], lines);
			final_square = ft_find_best_square(map, argv[i], 0, 0);
			ft_map_draw(map, final_square, argv[i]);
			ft_map_show(map);
			ft_myfree(map);
		}
		++i;
		if (argc > 2 && i < argc)
			write(1, "\n", 1);
	}
	return (0);
}

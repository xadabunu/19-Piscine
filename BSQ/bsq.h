/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:13:53 by hdero             #+#    #+#             */
/*   Updated: 2022/07/27 20:18:18 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

enum	e_setup
{
	GET_LINES,
	GET_EMPTY,
	GET_OBSTACLE,
	GET_FILLER
};

typedef struct s_sqr
{
	int	x;
	int	y;
	int	size;
}	t_sqr;

char	**ft_map_create(char **map, char *file, int nb_lines);
char	**ft_map_malloc(char *file, int nb_lines, int len);
void	ft_print_map(char **map);
int		ft_is_square_possible(char **map, t_sqr square, char *tab);
t_sqr	ft_find_best_square(char **map, char *file, int i, int j);
void	ft_map_draw(char **map, t_sqr square, char *file);
void	ft_map_show(char **map);
char	*ft_char_tab(char *file);
char	ft_getter(char *file, int target);
void	ft_myfree(char **map);
char	**ft_mymalloc(char **map, int size);
void	ft_malloc_all(char **map, int size, int len);
int		ft_getlines(char *file);
int		ft_getlen(char *file);
int		ft_getlen_fl(char *file);
int		ft_file_is_valid(char *file);

#endif

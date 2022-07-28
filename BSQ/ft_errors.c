/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:55:31 by hdero             #+#    #+#             */
/*   Updated: 2022/07/27 20:13:37 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_arguments_valid(char *file)
{
	int		fd;
	int		ret;
	int		nb_arg;
	char	args[4];
	int		ctr;

	nb_arg = 0;
	ctr = 0;
	fd = open(file, O_RDONLY);
	ret = read(fd, &args[0], 1);
	while (ctr++ < ft_getlen_fl(file) - 3 && args[0] >= '0' && args[0] <= '9')
	{
		ret = read(fd, &args[0], 1);
		nb_arg = 0;
	}
	while (args[nb_arg] != '\n')
	{
		nb_arg++;
		ret = read(fd, &args[nb_arg], 1);
	}
	if (nb_arg != 3 || args[0] == '0'
		|| args[0] == args[1] || args[1] == args[2] || args[2] == args[0])
		return (0);
	close(fd);
	return (1);
}

int	ft_lines_end_valid(char *file, int nb_lines)
{
	int		fd;
	int		ret;
	char	reading;
	int		nb_real_lines;

	reading = 0;
	fd = open(file, O_RDONLY);
	nb_real_lines = 0;
	while (reading != '\n')
		ret = read(fd, &reading, 1);
	ret = read(fd, &reading, 1);
	while (ret != 0)
	{
		if (reading == '\n')
			nb_real_lines++;
		ret = read(fd, &reading, 1);
	}
	if (nb_lines == nb_real_lines)
		return (1);
	return (0);
}

int	ft_lines_len_valid(char *file, int nb_len_first, int i)
{
	int		fd;
	int		ret;
	char	reading;

	reading = 0;
	fd = open(file, O_RDONLY);
	while (reading != '\n')
		ret = read(fd, &reading, 1);
	ret = read(fd, &reading, 1);
	while (reading != '\n')
	{
		ret = read(fd, &reading, 1);
		nb_len_first++;
	}
	if (nb_len_first < 1)
		return (0);
	while (ret != 0)
	{
		if (reading != '\n')
			return (0);
		i = 0;
		while (i++ < nb_len_first)
			ret = read(fd, &reading, 1);
	}
	return (1);
}

int	ft_arguments_only(char *file)
{
	char	*tab;
	int		fd;
	int		ret;
	char	reading;

	reading = 0;
	tab = ft_char_tab(file);
	fd = open(file, O_RDONLY);
	while (reading != '\n')
		ret = read(fd, &reading, 1);
	ret = read(fd, &reading, 1);
	while (ret != 0)
	{
		if (reading != tab[0] && reading != tab[1]
			&& reading != tab[2] && reading != '\n')
		{
			free(tab);
			return (0);
		}
		ret = read(fd, &reading, 1);
	}
	free(tab);
	return (1);
}

int	ft_file_is_valid(char *file)
{
	int	fd;
	int	nb_lines;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	nb_lines = ft_getlines(file);
	if (ft_arguments_valid(file) == 0)
		return (0);
	if (ft_lines_end_valid(file, nb_lines) == 0)
		return (0);
	if (ft_lines_len_valid(file, 1, 0) == 0)
		return (0);
	if (ft_arguments_only(file) == 0)
		return (0);
	return (1);
}

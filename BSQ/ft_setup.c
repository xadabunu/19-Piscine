/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:39:28 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/27 20:17:22 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	ft_getter(char *file, int target)
{
	int		fd;
	int		ctr;
	char	c;
	int		rd;
	int		len;

	len = ft_getlen_fl(file);
	fd = open(file, O_RDONLY);
	rd = read(fd, &c, 1);
	ctr = 0;
	while (c >= '0' && c <= '9' && ctr < len - 3)
	{
		rd = read(fd, &c, 1);
		++ctr;
	}
	ctr = 1;
	while (ctr < target)
	{
		rd = read(fd, &c, 1);
		++ctr;
	}
	close(fd);
	return (c);
}

char	*ft_char_tab(char *file)
{
	char	*tab;

	tab = malloc(sizeof(*tab) * 4);
	if (!tab)
		exit(0);
	tab[0] = ft_getter(file, 1);
	tab[1] = ft_getter(file, 2);
	tab[2] = ft_getter(file, 3);
	tab[3] = '\0';
	return (tab);
}

int	ft_atoi_file(char *file, int len)
{
	char	*nb;
	int		i;
	int		fd;
	int		res;

	nb = malloc(sizeof(*nb) * (len + 1));
	if (!nb)
		exit(0);
	i = 0;
	res = 0;
	fd = open(file, O_RDONLY);
	read(fd, nb, len);
	while (i < len)
	{
		res = res * 10 + nb[i] - '0';
		++i;
	}
	free(nb);
	close(fd);
	return (res);
}

int	ft_getlines(char *file)
{
	int		fd;
	char	c;
	int		n;
	int		ctr;
	int		len;

	ctr = 0;
	n = -1;
	c = 0;
	len = ft_getlen_fl(file);
	fd = open(file, O_RDONLY);
	n = read(fd, &c, 1);
	while (n != 0 && c >= '0' && c <= '9' && ctr < len - 3)
	{
		n = read(fd, &c, 1);
		++ctr;
	}
	close(fd);
	return (ft_atoi_file(file, ctr));
}

int	ft_getlen(char *file)
{
	int		fd;
	char	c;
	int		n;
	int		ctr;

	ctr = 0;
	n = -1;
	c = 0;
	fd = open(file, O_RDONLY);
	while (c != '\n')
		n = read(fd, &c, 1);
	n = read(fd, &c, 1);
	while (c != '\n')
	{
		ctr++;
		n = read(fd, &c, 1);
	}
	close(fd);
	return (ctr);
}

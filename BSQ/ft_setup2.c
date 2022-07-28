/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:35:15 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/27 19:33:15 by hdero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_getlen_fl(char *file)
{
	int		fd;
	char	c;
	int		ctr;
	int		rd;

	rd = 0;
	c = 0;
	ctr = 0;
	fd = open(file, O_RDONLY);
	while (rd >= 0 && c != '\n')
	{
		rd = read(fd, &c, 1);
		++ctr;
	}
	close(fd);
	return (ctr - 1);
}

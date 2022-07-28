/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:30:12 by rbarbiot          #+#    #+#             */
/*   Updated: 2022/07/24 21:15:03 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_error(int m)
{
	if (m)
		ft_putstr("Malloc Error\n");
	else
		ft_putstr("Dict Error\n");
	return (0);
}

int		ft_file_size(char *name)
{
	int		size;
	int		file;
	char	*content;
	
	size = 0;
	file = open(name, O_RDONLY, 0);
	if (!file)
		return (0);
	if ((content = malloc(sizeof(char *) * 1)) == 0)
		return (0);
	while (read(file, content, 1))
		size += read(file, content, 1) + 1;
	close(file);
	return (size);
}

char	*ft_readfile(char *name)
{
	int		file;
	char	*content;
	int		size;
	
	file = open(name, O_RDONLY, 0);
	size = ft_file_size(name);

	if (!file || !size)
		return (ft_error(0));
	if ((content = malloc(sizeof(char *) * size)) == 0)
		return (ft_error(1));
	read(file, content, size);
	content[size] = '\0';
	close(file);
	return (content);
}
/*
int	main(void)
{
	ft_putstr(ft_readfile("numbers.dict"));
	return (0);
}*/

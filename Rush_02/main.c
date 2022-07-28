/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:59:56 by kderhet           #+#    #+#             */
/*   Updated: 2022/07/24 21:23:21 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_dictcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	ft_check_argv(int argc, char **argv, char *nb, char *dictiopath)
{
	if (argc == 2)
	{
		ft_dictcpy("numbers.dict\0", dictiopath);
		nb = argv[1];
		return (1);
	}
	else
	{
		ft_dictcpy("numbers.dict\0", dictiopath);
		nb = argv[2];
		return (1);
	}
	return (0);
}

int	ft_testnb(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*nb;
	char	*dictiopath;

	if (argc == 2)
	{
		dictiopath = malloc(sizeof(char) * 13);
		nb = malloc(sizeof(char) * ft_strlen(argv[1]));
	}
	else if (argc == 3)
	{
		dictiopath = malloc(sizeof(char) * ft_strlen(argv[2]));
		nb = malloc(sizeof(char) * ft_strlen(argv[2]));
	}
	if ((argc == 2 || argc == 3) && dictiopath && nb)
	{
		if (ft_check_argv(argc, argv, nb, dictiopath) == 0 || ft_testnb(nb) == 0)
		{
			ft_putstr("Error\n");
		}
		else
			ft_rush(nb, dictiopath);
			//ft_putstr(ft_trim(ft_readfile(dictiopath)));

	}
	else
		ft_putstr("Error\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:30:15 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/19 17:09:11 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (!range)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	tab = malloc(sizeof(*tab) * (max - min));
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	while (min + i < max)
	{
		tab[i] = min + i;
		++i;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*tab;

	tab = 0;
	printf("%d\n", ft_ultimate_range(&tab, 2, 13));
	for (int i = 0; i < 11; ++i)
	{
		printf("%d\n", tab[i]);
	}
	return (0);
}*/

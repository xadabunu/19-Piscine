/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:30:15 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/18 15:21:24 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (!range || min >= max)
	{
		return (0);
	}
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:30:15 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 19:30:18 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (!range)
	{
		return (-1);
	}
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		tab[i] = min + i;
		++i;
	}
	*range = tab;
	return (i);
}

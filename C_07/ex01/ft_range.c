/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:14:08 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/14 21:03:41 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		++i;
	}
	return (tab);
}

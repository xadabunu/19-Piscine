/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:14:08 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/18 15:13:26 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(*tab) * (max - min + 1));
	if (max <= min || !tab)
		return (0);
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		++i;
	}
	tab[i] = '\0';
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:46:25 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 20:44:03 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(*res) * length);
	if (!res)
		return (0);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		++i;
	}
	return (res);
}

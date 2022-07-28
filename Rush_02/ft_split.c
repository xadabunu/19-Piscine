/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:49:16 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/24 21:29:16 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_atoi_illions(char *str, int *pos, int len)
{
	int	res;

	res = str[*pos] - '0';
	++*pos;
	while (str[*pos] && (len - *pos) % 3 != 0)
	{
		res = res * 10 + str[*pos] - '0';
		++*pos;
	}
	return (res);
}

int	ft_atoi_keys(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] && str[i] != ':')
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return (res);
}

int	*ft_split_illions(char *str)
{
	int	nb_illions;
	int	len;
	int	*tab;
	int	i;
	int	pos;

	len = ft_strlen(str);
	nb_illions = len / 3;
	if (len % 3 != 0)
		++nb_illions;
	tab = malloc(sizeof(*tab) * (nb_illions + 1));
	if (!tab)
	{
		write (1, "malloc() failed.", 16);
		return (0);
	}
	i = 0;
	pos = 0;
	while (i < nb_illions)
	{
		tab[i] = ft_atoi_illions(str, &pos, len);
		++i;
	}
	tab[i] = -1;
	return (tab);
}

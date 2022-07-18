/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:47:18 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/18 23:27:52 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_str_copy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
		dest[i] = src[i];
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = malloc(sizeof(*tab) * ac);
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		ft_str_copy(av[i], tab[i].str);
		ft_str_copy(av[i], tab[i].copy);
		++i;
	}
	tab[i].str = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:09:09 by xadabunu          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/25 12:50:37 by xadabunu         ###   ########.fr       */
=======
/*   Updated: 2022/07/24 21:59:56 by kderhet          ###   ########.fr       */
>>>>>>> cccc7dfedf3861a2e8f728dcba6e842bd6da3e93
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>

int	ft_strlenkey(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ':')
		++i;
	return (i);
}
int	ft_nb_lines(char *str)
{
	int	i;
	int	ctr;

	i = 0;
	ctr = 0;
	while (str[i])
	{
		if (str[i] == 10)
			++ctr;
		++i;
	}
	return (ctr);
}

void	ft_set_keys(char *str, t_key_val *tab, int i, int *pos)
{
	int	len;

	len = ft_strlenkey(str);
	*pos += len;
	if (len <= 3)
		tab[i].key = ft_atoi_keys(str);
	else
		tab[i].key = 1000 + len / 3;
}

t_key_val	*str_to_struct(char *str)
{
	t_key_val	*tab;
	int			pos;
	int			lines;
	int			i;

	lines = ft_nb_lines(str);
	if (lines > 41)
		return (0);
	tab = malloc(sizeof(*tab) * (lines + 2000));
	if (!tab)
		return (0);
	pos = 0;
	i = 0;	
	while (i < lines)
	{	
		ft_set_keys(&str[pos], tab, i, &pos);	
		++pos;
		ft_strcpy(tab[i].value, &str[pos], &i);
		printf("%d\n", i);
		++pos;
		++i;
	}
	tab[i].key = 0;
	return (tab);
}

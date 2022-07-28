/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:34:56 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/22 12:44:11 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		++i;
	}
	return (0);
}

int	ft_strlen(char *str, char *set, int *pos)
{
	int	j;

	while (str[*pos] && is_in_set(str[*pos], set))
		++*pos;
	j = *pos;
	while (str[*pos] && !is_in_set(str[*pos], set))
		++*pos;
	return (*pos - j);
}

int	str_count(char *str, char *set)
{
	int	i;
	int	ctr;

	i = 0;
	ctr = 0;
	while (str[i])
	{
		if (!is_in_set(str[i], set))
		{
			++ctr;
			while (str[i] && !is_in_set(str[i], set))
				++i;
		}
		++i;
	}
	return (ctr);
}

char	**ft_assign(char *str, char **tab, int size, char *set)
{
	int	i;
	int	n;
	int	j;

	n = 0;
	i = 0;
	j = 0;
	while (n < size && str[i])
	{
		if (!is_in_set(str[i], set))
		{
			while (str[i] && !is_in_set(str[i], set))
				tab[n][j++] = str[i++];
			tab[n][j] = '\0';
			++n;
			j = 0;
		}
		++i;
	}
	tab[n] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**tab;
	int		i;
	int		len;
	int		pos;

	if (!str || !charset)
		return (0);
	size = str_count(str, charset);
	tab = malloc(sizeof (char *) * (size + 1));
	if (!tab)
		return (0);
	i = 0;
	len = 0;
	pos = 0;
	while (i < size)
	{
		len = ft_strlen(str, charset, &pos);
		tab[i] = malloc(sizeof (char) * (1 + len));
		if (!tab[i])
			return (0);
		++i;
	}
	return (ft_assign(str, tab, size, charset));
}

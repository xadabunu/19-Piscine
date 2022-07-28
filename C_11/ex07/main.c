/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:32:11 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/28 13:23:23 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char **tab;

	tab = malloc(sizeof(*tab) * 5);
	tab[0] = "on";
	tab[1] = "fait";
	tab[2] = "des";
	tab[3] = "tests";
	tab[4] = "aah";

	ft_advanced_sort_string_tab(tab, &ft_strcmp);

	for (int i = 0 ; i < 5 ; ++i)
		printf("%s\n", tab[i]);
	free(tab);
	return (0);
}

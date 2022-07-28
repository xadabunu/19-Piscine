/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:00:43 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 14:11:28 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int main(void)
{
	char **tab;

	tab = malloc(sizeof(*tab) * 6);
	for (int i = 0 ; i < 6 ; ++i)
		tab[i] = malloc(sizeof(char) * 5);
	tab[0] = "wesh";
	tab[1] = "aesh";
	tab[2] = "cesh";
	tab[3] = "zesh";
	tab[4] = "esh";
	tab[5] = NULL;
	
	for (int i = 0 ; i < 6 ; ++i)
		printf("str : %s, add : %p\n", tab[i], &tab[i]);
	ft_sort_string_tab(tab);
	for (int i = 0 ; i < 6 ; ++i)
		printf("str : %s, add : %p\n", tab[i], &tab[i]);
}

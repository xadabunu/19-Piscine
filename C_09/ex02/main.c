/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:36:29 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/23 16:40:08 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	int		i;
	char	**tab;
	i = 0;
	//tab = ft_split(";;;:::pppHellow; row;: Salut:pmemepppepepepe", ";:p");
	tab = ft_split(NULL, ".");
	do
	{
		printf("%p: |%s|\n", tab[i], tab[i]);
		i++;
	} while (tab[i]);
	printf("%-14p: |%s|\n", tab[i], tab[i]);
	//printf("%p\n", tab);
}

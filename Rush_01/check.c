/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lswaans <lswaans@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:34:35 by lswaans           #+#    #+#             */
/*   Updated: 2022/07/17 11:22:54 by lswaans          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*check_input(char *str)
{
	int		i;
	int		p;
	char	puzzle[16];
	char	*pzl;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (i > 31)
			return (0);
		else if (str[i] == ' ')
			i++;
		else if (str[i] >= '1' && str[i] <= '4')
		{
			puzzle[p] = str[i];
			p++;
			i++;
		}
		else
			return (0);
	}
	pzl = puzzle;
	return (pzl);
}

int	check_double(char **tab, int x, int y, char try)
{
	int	i;

	i = y;
	while (i > 0)
	{
		if (try == tab[i][y])
		{
			return (1);
		}
		i--;
	}
	i = 4;
	while (i > 0)
	{
		if (try == tab[x][i])
		{
			return (1);
		}
		i--;
	}
	return (0);
}

/* #include <stdio.h>
int main (void)
{
    printf("%s", check("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"));
    return (0);
} */

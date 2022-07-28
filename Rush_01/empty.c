/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:10:48 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 13:17:20 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	empty_line(char **tab, int line)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (tab[line][i] != 'x')
			return (0);
		++i;
	}
	return (1);
}

int	empty_column(char **tab, int column)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (tab[i][column] != 'x')
			return (0);
		++i;
	}
	return (1);
}

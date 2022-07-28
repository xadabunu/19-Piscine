/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_column.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lswaans <lswaans@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:49:13 by lswaans           #+#    #+#             */
/*   Updated: 2022/07/16 16:53:34 by lswaans          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	column_top(char **tab, int x, int value)
{
	int	i;
	int	height;
	int	max;
	int	count;

	i = 1;
	max = 0;
	count = 0;
	while (i < 5)
	{
		height = tab[x][i];
		if (height > max)
			count++;
		i++;
	}
	if (count == value)
		return (1);
	return (0);
}

int	column_bot(char **tab, int x, int value)
{
	int	i;
	int	height;
	int	max;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	while (i > 0)
	{
		height = tab[x][i];
		if (height > max)
			count++;
		i--;
	}
	if (count == value)
		return (1);
	return (0);
}

int	check_column(char **tab, int x)
{
	int	value_top;
	int	value_bot;
	int	top;
	int	bot;

	value_top = tab[x][0];
	value_bot = tab[x][5];
	top = column_top(tab, x, value_top);
	bot = column_bot(tab, x, value_bot);
	if ((top == 1) && (bot == 1))
	{
		return (1);
	}
	return (0);
}
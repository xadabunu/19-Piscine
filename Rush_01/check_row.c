/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lswaans <lswaans@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:27:22 by lswaans           #+#    #+#             */
/*   Updated: 2022/07/16 16:48:45 by lswaans          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_left(char **tab, int y, int value)
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
		height = tab[i][y];
		if (height > max)
			count++;
		i++;
	}
	if (count == value)
		return (1);
	return (0);
}

int	row_right(char **tab, int y, int value)
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
		height = tab[i][y];
		if (height > max)
			count++;
		i--;
	}
	if (count == value)
		return (1);
	return (0);
}

int	check_row(char **tab, int y)
{
	int	value_left;
	int	value_right;
	int	left;
	int	right;

	value_left = tab[0][y];
	value_right = tab[5][y];
	left = row_left(tab, y, value_left);
	right = row_right(tab, y, value_right);
	if ((left == 1) && (right == 1))
	{
		return (1);
	}
	return (0);
}

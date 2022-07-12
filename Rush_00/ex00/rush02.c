/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:03:02 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/10 12:38:17 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putchar(char c);

void	ft_print(int x, int y, int line, int column)
{
	if (line == 0 && (column == 0 || column == x - 1))
		ft_putchar('A');
	else if (line == y - 1 && (column == 0 || column == x - 1))
		ft_putchar('C');
	else if (line == 0 || line == y - 1 || column == 0 || column == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	if (x <= 0 || y <= 0)
		return ;
	line = 0;
	column = 0;
	while (line < y)
	{
		while (column < x)
		{
			ft_print(x, y, line, column);
			++column;
		}
		ft_putchar('\n');
		++line;
		column = 0;
	}
}
/*
int	main(void)
{
	rush(1, 1);
	return (0);
}
*/

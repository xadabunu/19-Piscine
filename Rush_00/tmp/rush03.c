/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:48:15 by cmartino          #+#    #+#             */
/*   Updated: 2022/07/10 12:38:22 by xadabunu         ###   ########.fr       */
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
	if (((line == 0 || line == y - 1) && column == 0))
		ft_putchar('A');
	else if (line == y - 1 && column == x - 1)
	{
		ft_putchar('C');
	}
	else if (line == 0 && column == x - 1)
		ft_putchar('C');
	else if (line == 0 || column == 0 || line == y - 1 || column == x - 1)
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
	rush(5, 3);
	return (0);
}*/

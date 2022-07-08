/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:17:37 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/07 21:46:30 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = 48 + nb;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = 48 + nb / 10;
		write(1, &c, 1);
		c = 48 + nb % 10;
		write(1, &c, 1);
	}
}

void	print_comb(int a, int b)
{
	ft_putnbr(a);
	write(1, " ", 1);
	ft_putnbr(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b < 100)
		{
			print_comb(a, b);
			write(1, ", ", 2);
			++b;
		}
		++a;
		b = a + 1;
	}
	write(1, "98 99", 5);
}

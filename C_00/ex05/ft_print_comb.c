/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:59:23 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/08 13:04:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n)
{
	char	c;

	c = 48 + n;
	write(1, &c, 1);
}

void	print(int a, int b, int c)
{
	ft_print_numbers(a);
	ft_print_numbers(b);
	ft_print_numbers(c);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 7)
	{
		while (b < 9)
		{
			while (c < 10)
			{
				print(a, b, c);
				++c;
			}
			++b;
			c = b + 1;
		}
		++a;
		b = a + 1;
		c = b + 1;
	}
	write(1, "789", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:12:46 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 15:22:23 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_min(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
		return ;
	}
	ft_putnbr(a % b);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
		return ;
	}
	ft_putnbr(a / b);
	ft_putchar('\n');
}

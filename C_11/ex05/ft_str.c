/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:59:49 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 13:24:36 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	uns_nb;

	if (nb < 0)
	{
		write(1, "-", 1);
		uns_nb = -nb;
	}
	else
		uns_nb = nb;
	if (uns_nb > 9)
	{
		ft_putnbr(uns_nb / 10);
	}
	c = 48 + uns_nb % 10;
	write(1, &c, 1);
}

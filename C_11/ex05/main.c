/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:51:59 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 22:10:38 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_argv(char **argv)
{
	char	c;

	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	c = argv[2][0];
	if (c != '+' && c != '-' && c != '*' && c != '%' && c != '/')
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

int	ft_operation(char c)
{
	if (c == '+')
		return (ADD);
	if (c == '-')
		return (MIN);
	if (c == '*')
		return (MUL);
	if (c == '/')
		return (DIV);
	return (MOD);
}

int	main(int argc, char **argv)
{
	void	(*tab[5])(int, int);
	int		a;
	int		b;

	if (argc == 4 && check_argv(argv))
	{
		tab[0] = &ft_add;
		tab[1] = &ft_min;
		tab[2] = &ft_mul;
		tab[3] = &ft_div;
		tab[4] = &ft_mod;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		tab[ft_operation(argv[2][0])](a, b);
	}
}

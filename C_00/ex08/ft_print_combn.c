/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:22:31 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/08 14:15:38 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	aff(int n)
{
	if (n < 10)
		return 1;
	if (n % 10 < (n / 10) % 10)
		return aff(n / 10);
	return 0;
}

int	getlg(int n)
{
	int	res;

	res = 1;
	while (n % 10 != n / 10)
	{
		++res;
		n = n / 10;
	}
	return (res);
}

void	print(int n)
{
	char	c;

	if (n > 9)
	{
		print(n / 10);
	}
	c = 48 + n;
	write(1, &c, 1);
}

void	print_numbers(int n)
{
	if (n < 10)
	{
		write(1, "0", 1);
	}
	print(n);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 1;

	while (getlg(i) <= n)
	{
		if (aff(i) == 1)
		{
			print_numbers(i);
			write(1, ", ", 2);
		}
		++i;
	}
}

int	main(void)
{
	ft_print_combn(3);
}

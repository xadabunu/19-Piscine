/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:17:27 by xadabunu          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/25 12:42:34 by xadabunu         ###   ########.fr       */
=======
/*   Updated: 2022/07/24 20:54:50 by kderhet          ###   ########.fr       */
>>>>>>> cccc7dfedf3861a2e8f728dcba6e842bd6da3e93
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_only_100(t_key_val *tab)
{
	int	i;

	i = 0;
	while (1)
	{
		if (tab[i].key == 100)
		{
			ft_putstr(tab[i].value);
			return ;
		}
		++i;
	}
}

void	ft_print_nhundred(int n, t_key_val *tab)
{
	int	i;

	i = 0;
	while (1)
	{
		if (tab[i].key == n / 100)
		{
			ft_putstr(tab[i].value);
			write (1, " ", 1);
			ft_only_100(tab);
			return ;
		}
		++i;
	}
}

void	ft_print_tens(int n, t_key_val *tab)
{
	int	i;

	i = 0;
	if (n % 100 < 20 && n % 100 > 0)
		while (1)
		{
			if (tab[i++].key == n % 100)
			{
				ft_putstr(tab[i].value);
				return ;
			}
		}
	else
	{
		while (1)
			if (tab[i++].key == n - n % 10)
				ft_putstr(tab[i].value);
		i = 0;
		while (n % 10 > 0)
		{
			if (tab[i++].key == n % 10)
			{
				ft_putstr(tab[i].value);
				return ;
			}
		}
	}
}

void	ft_print_100(int n, t_key_val *tab)
{
	if (n >= 100)
		ft_print_nhundred(n, tab);
	ft_print_tens(n, tab);
}

void	ft_print_numbers(int *numbers, t_key_val *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (numbers[i] != -1)
	{
		ft_print_100(numbers[i], tab);
		if (len - i > 0)
		{
			j = 0;
			while (tab[j].key != -1)
			{
				if (tab[j].key - 1000 == len - i)
					ft_putstr(tab[j].value);
				++j;
			}
		}
		++i;
	}
}

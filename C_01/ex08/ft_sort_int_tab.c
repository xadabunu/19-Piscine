/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:33:17 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/09 19:37:27 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i, int j)
{
	int	tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	ind_min;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		ind_min = i;
		while (j < size)
		{
			if (tab[j] < tab[ind_min])
				ind_min = j;
			++j;
		}
		if (ind_min != i)
			ft_swap(tab, i, ind_min);
		++i;
		j = i + 1;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 8, 6, 14, 2, 0};
	ft_sort_int_tab(tab, 6);
	int i = 0;
	while (i < 6)
	{
		printf("%d", tab[i]);
		++i;
	}
}*/

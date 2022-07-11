/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:02:08 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/09 15:31:48 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		++i;
	}
}
/*
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6};
    ft_rev_int_tab(tab, 6);
    int i = 0;
    while (i < 6)
    {
        printf("%d", tab[i]);
        ++i;
    }
}*/

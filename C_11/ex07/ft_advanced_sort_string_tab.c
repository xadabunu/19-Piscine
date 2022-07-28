/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:04:53 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/28 12:48:49 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	ind_min;

	if (!tab || tab[0] == 0)
		return ;
	i = 0;
	while (tab[i + 1] != 0)
	{
		j = i + 1;
		ind_min = i;
		while (tab[j] != 0)
		{
			if ((*cmp)(tab[ind_min], tab[j]) > 0)
				ind_min = j;
			++j;
		}
		if (ind_min != i)
			ft_swap(&tab[i], &tab[ind_min]);
		++i;
	}
}

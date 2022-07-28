/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:48:07 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 10:49:53 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1 && (*f)(tab[i], tab[i + 1]) == 0)
		++i;
	if (i < length - 1 && (*f)(tab[i], tab[i + 1]) < 0)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			++i;
		}
	}
	if (i < length - 1 && (*f)(tab[i], tab[i + 1]) > 0)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
			++i;
		}
	}
	return (1);
}

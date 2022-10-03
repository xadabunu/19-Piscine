/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:22:50 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 22:31:41 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
		return (0);
	res = 1;
	i = 0;
	while (i < power)
	{
		res *= nb;
		++i;
	}
	return (res);
}

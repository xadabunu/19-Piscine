/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:40:50 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/13 11:57:42 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	try;

	if (nb < 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	try = 2;
	if (nb < 2)
		return (0);
	while (try * try <= nb)
	{
		if (nb % try == 0)
			return (0);
		++try;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	if (nb == 2147483647)
		return (nb);
	i = nb;
	while (!ft_is_prime(i))
		++i;
	return (i);
}

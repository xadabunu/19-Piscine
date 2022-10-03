/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:51:07 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/15 12:46:09 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	try;
	unsigned int	uns_nb;

	if (nb < 0)
		return (0);
	uns_nb = nb;
	if (uns_nb < 2)
		return (0);
	if (uns_nb > 2 && uns_nb % 2 == 0)
		return (0);
	try = 2;
	while (try * try <= uns_nb)
	{
		if (uns_nb % try == 0)
			return (0);
		++try;
	}
	return (1);
}

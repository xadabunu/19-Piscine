/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:39:19 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 12:09:37 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			++j;
		}
		++i;
	}
	return (i);
}

void	ft_recur(unsigned int i, unsigned int len, char *base)
{
	if (i > len - 1)
		ft_recur(i / len, len, base);
	ft_putchar(base[i % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	uns_nbr;

	len = ft_strlen(base);
	if (len <= 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		uns_nbr = (unsigned int)-nbr;
	}
	else
		uns_nbr = nbr;
	ft_recur(uns_nbr, len, base);
}

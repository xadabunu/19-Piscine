/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:15:21 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 15:15:31 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str, int i)
{
	int		d;
	char	c;

	if (str[i] < 32)
	{
		write(1, "\\", 1);
		d = str[i] / 16;
		c = d + 48;
		write(1, &c, 1);
		d = str[i] % 16;
		c = d + 48;
		if (d > 9)
		{
			c = d - 9 + 48;
			write(1, &c, 1);
		}
		else
			write(1, &c, 1);
	}
	else
		write(1, str + i, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_print(str, i);
		++i;
	}
}

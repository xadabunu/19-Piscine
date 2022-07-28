/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:01:54 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/13 21:09:02 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		++i;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (--i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:34:33 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/24 21:49:14 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int *pos)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(*dest) * (ft_strlen(src) + 1000));
	ft_putstr("MANGE TES MORTS\n");
	if (!dest)
		return (0);
	while (src[*pos] && src[*pos] != ':' && src[*pos] != 10)
	{
		dest[i] = src[*pos];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

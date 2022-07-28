/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:58:40 by kderhet           #+#    #+#             */
/*   Updated: 2022/07/24 17:58:05 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

char	*ft_rm_spaces(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc((ft_strlen(str) + 1) * sizeof(char));
	while (str[i])
	{
		while (!(str[i] >= 9 && str[i] <= 32) && str[i])
			res[j++] = str[i++];
		i++;
		res[j++] = str[i++];
		i++;
		while (str[i] && str[i + 1] != '\n')
			res[j++] = str[i++];
		i++;
		res[j++] = str[i++];
	}
	res[j - 2] = '\0';
	return (res);
}

char	*ft_trim(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc((ft_strlen(str) + 1) * sizeof(char));
	while (str[i])
	{
		if (str[i] == '\n')
		{
			dest[j++] = str[i++];
			while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
				i++;
		}
		else if (!(str[i] >= 9 && str[i] <= 32))
			dest[j++] = str[i++];
		else if (str[i - 1] >= '!' && str[i - 1] <= '~')
			dest[j++] = str[i++];
		else
			++i;
	}
	dest[j - 1] = '\0';
	str = ft_rm_spaces(dest);
	return (str);
}

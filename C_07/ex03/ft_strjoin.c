/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:20:18 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/25 19:07:52 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strslen(char **strs, int size)
{
	int				i;
	unsigned int	j;
	unsigned int	ctr;

	i = 0;
	j = 0;
	ctr = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			++j;
			++ctr;
		}
		j = 0;
		++i;
	}
	return (ctr);
}

char	*ft_assign(char *str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			++j;
		}
		j = 0;
		while (i < size - 1 && sep[j])
			str[k++] = sep[j++];
		++i;
		j = 0;
	}
	str[k] = '\0';
	return (str);
}

int	ft_check_strs(char **strs, int size)
{
	int	i;

	if (!strs)
		return (0);
	i = 0;
	while (i < size)
	{
		if (strs[i] == 0)
			return (0);
		++i;
	}
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;
	int		len;

	if (size == 0)
	{
		str = malloc(sizeof(*str));
		str[0] = '\0';
		return (str);
	}
	if (!ft_check_strs(strs, size) || !sep)
		return (0);
	sep_len = ft_strlen(sep);
	len = ft_strslen(strs, size);
	str = malloc(sizeof(char) * (len + (sep_len * (size - 1)) + 1));
	if (!str)
		return (0);
	str = ft_assign(str, strs, sep, size);
	return (str);
}

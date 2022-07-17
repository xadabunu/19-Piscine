/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:20:18 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 22:00:22 by xadabunu         ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	j;
	unsigned int	ctr;

	i = 0;
	j = 0;
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

char	*ft_alloc(char *str, char **strs, char *sep, int size)
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
			str[k] = strs[i][j];
			++k;
			++j;
		}
		j = 0;
		while (i < size - 1 && sep[j])
		{
			str[k] = sep[j];
			++j;
			++k;
		}
		++i;
		j = 0;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;
	int		len;

	if (size == 0)
		return ("");
	sep_len = ft_strlen(sep);
	len = ft_strslen(strs, size);
	str = malloc(sizeof(char) * (len + sep_len));
	str = ft_alloc(str, strs, sep, size);
	return (str);
}
/*
int	main(void)
{
	char **str;
	char sep[] = "yo";

	str = malloc(sizeof(*str) * 3);
	str[0] = "premier";
	str[1] = "deuxieme";
	str[2] = "troi sieme";
	printf("%s", ft_strjoin(3, str, sep));
}
*/

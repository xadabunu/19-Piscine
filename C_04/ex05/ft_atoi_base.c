/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:19:09 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 13:25:12 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == '\f')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_strlen(char *base)
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

int	ft_get_index(char c, char *base)
{
	int	res;
	int	i;

	res = -1;
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			res = i;
		++i;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	if (ft_strlen(base) <= 1)
		return (0);
	res = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while (str[i])
	{
		if (ft_get_index(str[i], base) == -1)
			return (0);
		res = res * ft_strlen(base) + ft_get_index(str[i], base);
	}
	return (res);
}

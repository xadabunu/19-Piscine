/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:38:41 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/18 18:54:45 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);

unsigned int	ft_len_assign(int nb, char *base)
{
	unsigned int	res;
	int	len;

	len = ft_strlen(base);
	res = 0;
	if (nb < 0)
		++res;
	while (nb != nb % len)
	{
		++res;
		nb = nb / len;
	}
	return (res + 1);
}

char	*ft_itoa(char *str, unsigned int nb, char *base, int *i)
{
	/*
	int	rev;
	int	len;

	len = ft_strlen(base);
	rev = 0;
	while (nb > nb % 10)
	{
		rev = (rev * 10) + (nb / 10);
		nb = nb / 10;
		printf("%d\n", rev);
	}
	rev = rev * 10 + nb / 10;
	while (rev > rev % len)
	{
		str[i] = rev % len + 48;
		rev = rev / len;
	}
	return (str);
	*/
	if (nb > ft_strlen(base))
		ft_itoa(str, nb / ft_strlen(base), base, i);
	str[*i] = base[nb * ft_strlen(base)];
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	char			*str;
	unsigned int	len;
	int				i;

	if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	len = ft_len_assign(nb, base_to);
	str = malloc(len * sizeof(*str));
	if (!str)
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		len = -nb;
		i = 1;
	}
	else
	{
		len = nb;
		i = 1;
	}
	return (ft_itoa(str, len, base_to, &i));
}

int	main(void)
{
	printf("%s\n", ft_convert_base("on","poneyvif","01"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:38:41 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/24 22:35:29 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);

int	ft_len_assign(int nb, char *base)
{
	int				res;
	int				len;
	unsigned int	u_nb;

	len = ft_strlen(base);
	res = 0;
	if (nb < 0)
	{
		++res;
		u_nb = -nb;
	}
	else
		u_nb = nb;
	while (u_nb > 0)
	{
		++res;
		u_nb = u_nb / len;
	}
	return (res);
}

char	*ft_itoa(char *str, unsigned int nb, char *base, int len)
{
	int	base_len;

	base_len = ft_strlen(base);
	str[len] = '\0';
	--len;
	while (len >= 0 && str[len] != '-')
	{
		str[len] = base[nb % base_len];
		--len;
		nb = nb / base_len;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	char			*str;
	int				len;
	unsigned int	u_nb;

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
		u_nb = -nb;
	}
	else
		u_nb = nb;
	return (ft_itoa(str, u_nb, base_to, len));
}

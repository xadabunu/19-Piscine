/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:59:38 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 14:08:53 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				res = 0;
		++i;
		}
	}
	return (res);
}

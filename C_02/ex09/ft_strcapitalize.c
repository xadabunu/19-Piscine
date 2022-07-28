/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:45:22 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/12 12:55:54 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_ismin( char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	++i;
	while (str[i])
	{
		if (ft_isalphanum(str[i]) == 0 && ft_ismin(str[i + 1]) == 1)
		{
			str[i + 1] = str[i + 1] - 32;
			++i;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (ft_isalphanum(str[i - 1]) == 1)
			str[i] = str[i] + 32;
		}
		++i;
	}
	return (str);
}

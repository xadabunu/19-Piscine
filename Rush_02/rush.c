/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:08:18 by xadabunu          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/25 12:48:31 by xadabunu         ###   ########.fr       */
=======
/*   Updated: 2022/07/24 21:32:50 by kderhet          ###   ########.fr       */
>>>>>>> cccc7dfedf3861a2e8f728dcba6e842bd6da3e93
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_rush(char *nb, char *dicopath)
{
	t_key_val	*dico;
	int			*tab;

	dico = str_to_struct(ft_trim(ft_readfile(dicopath)));
	//tab = ft_split_illions(nb);
	//ft_print_numbers(tab, dico, ft_strlen(nb));
}

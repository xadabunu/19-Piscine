/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:07:01 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/20 12:14:36 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	main(void)
{
	char	**strs;

	strs = malloc(0 * sizeof (*strs));
	/*strs[0] = "premier";
	strs[1] = "celui d'après";
	strs[2] = "encore ensuite";
	strs[3] = "c'est bientot fini";
	strs[4] = "vOila c le denier";*/
	ft_show_tab(ft_strs_to_tab(0, strs));
	free(strs);
	return (0);
}

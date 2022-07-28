/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:45:26 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/25 19:11:47 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char	**strs;

	strs = malloc(sizeof(*strs) * 15);
	strs[0] = "ooibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[1] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnn";
	strs[2] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnn";
	strs[3] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnjgn";
	strs[4] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[5] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgngn";
	strs[6] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[7] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[8] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnjgn";
	strs[9] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[10] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[11] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnjgnjgnejgnjgnjgn";
	strs[12] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	strs[13] = "oibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgngn";
	strs[14] = "oibroigboibfigbifpgjnpsfnbkheoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jneoibroigboibfigbifpgjnpsfnbkhesifgnpiebfvnjfbejn[jofgn[osmv;jnejgnjgnsifgnpiebfvnjfbejn[jofgn[osmv;jnejgn";
	printf("%s\n", ft_strjoin(0, strs, " | "));
}

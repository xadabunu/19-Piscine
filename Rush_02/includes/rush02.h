/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:11:20 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/24 19:41:35 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_key_val
{
	int		key;
	char	*value;
}	t_key_val;
int			ft_atoi_illions(char *str, int *pos, int len);
int			*ft_split_illions(char *str);
int			ft_atoi_keys(char *str);
int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src, int *pos);
void		ft_putstr(char *str);
void		ft_only_100(t_key_val *tab);
void		ft_print_nhundred(int n, t_key_val *tab);
void		ft_print_tens(int n, t_key_val *tab);
void		ft_print_100(int n, t_key_val *tab);
void		ft_print_numbers(int *numbers, t_key_val *tab, int len);
char		*ft_error(int m);
int			ft_file_size(char *name);
char		*ft_readfile(char *name);
int			ft_nb_lines(char *str);
void		ft_set_keys(char *str, t_key_val *tab, int i, int *pos);
t_key_val	*str_to_struct(char *str);
char		*ft_rm_spaces(char *str);
char		*ft_trim(char *str);

#endif

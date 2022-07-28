/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:23:12 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/17 13:23:00 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**tab_init(char *str, char **tab);
int		check_double(char **tab, int x, int y, char opt);
char	*check_input(char *str);
int		column_top(char **tab, int x, int value);
int		column_bot(char **tab, int x, int value);
int		check_column(char **tab, int x);
int		row_left(char **tab, int y, int value);
int		row_right(char **tab, int y, int value);
int		check_row(char **tab, int y);
void	print_tab(char **tab);
int		sub_solve(char **tab, int x, int y);
int		solve(char **tab);
void	fill_sides(char **tab, char *str);
void	fill_x(char **tab);
int		empty_line(char **tab, int line);
int		empty_column(char **tab, int column);
int		filler_1_top_bottom(char **tab, int line, int column);
int		filler_1_sides(char **tab, int line, int column);
int		filler_4_top_bottom(char **tab, int line, int column);
int		filler_4_sides(char **tab, int line, int column);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:21:05 by xadabunu          #+#    #+#             */
/*   Updated: 2022/07/26 15:22:54 by xadabunu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

enum	e_ops
{
	ADD = 0,
	MIN = 1,
	MUL = 2,
	DIV = 3,
	MOD = 4,
};

int		ft_atoi(char *str);
void	ft_add(int a, int b);
void	ft_min(int a, int b);
void	ft_mul(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif

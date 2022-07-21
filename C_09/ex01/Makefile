# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 15:09:26 by xadabunu          #+#    #+#              #
#    Updated: 2022/07/21 15:11:43 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strlen.c \
			  srcs/ft_strcmp.c srcs/ft_putstr.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

HEADER		= includes/

CC			= gcc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

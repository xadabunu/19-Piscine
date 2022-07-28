# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 22:42:47 by xadabunu          #+#    #+#              #
#    Updated: 2022/07/26 13:12:07 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c ft_operations.c ft_str.c main.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

CC			= gcc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 17:25:55 by xadabunu          #+#    #+#              #
#    Updated: 2022/07/27 20:24:18 by hdero            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_map.c \
				ft_setup.c \
				ft_setup2.c \
				ft_square.c \
				ft_util.c \
				ft_errors.c \
				ft_malloc.c \
				main.c

OBJS		=	${SRCS:.c=.o}

NAME		=	bsq

CC			=	gcc

RM			=	rm -f

CFLAGS 		=	-Wall -Wextra -Werror

.c.o		:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}		:	${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all			:	${NAME}

clean		:
				${RM} ${OBJS}

fclean		:	clean
				${RM} ${NAME}

re			:	fclean all

.PHONY		:	all clean fclean re

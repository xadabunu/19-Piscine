# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 11:33:17 by xadabunu          #+#    #+#              #
#    Updated: 2022/07/25 12:59:35 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_str.c ft_split.c ft_print_numbers.c ft_trim.c \
			ft_str_to_struct.c ft_readfile.c

MAIN	=	main.c

HEADERS	=	rush02.h

OBJS	=	${SRCS:.c=.o}

NAME	=	rush-02

LIB		=	librush.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o	:
			${CC} ${CFLAGS} -I ${HEADERS}-c $< -o ${<:.c=.o}

${NAME}	:	${LIB} ${MAIN} ${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME} ${LIB}

re		:	fclean all

${LIB}	:	${OBJS}
			ar rcs ${LIB} ${OBJS}

.PHONY	:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 12:17:47 by vdescamp          #+#    #+#              #
#    Updated: 2022/08/10 14:38:01 by vdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/big_algo.c \
		srcs/check_algo.c \
		srcs/execute.c \
		srcs/ft_split.c \
		srcs/index.c \
		srcs/main.c \
		srcs/med_algo.c \
		srcs/moves.c \
		srcs/parsing.c \
		srcs/small_algo.c \
		srcs/utils.c \
		srcs/utils1.c \

OBJS = ${SRCS:.c=.o}

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -g #-fsanitize=address

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re :    fclean all

.PHONY: all clean fclean re

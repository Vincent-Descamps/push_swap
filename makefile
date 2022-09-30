# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 15:22:00 by vdescamp          #+#    #+#              #
#    Updated: 2022/09/30 15:22:48 by vdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := push_swap
CC        := gcc
FLAGS    := -Wall -Wextra -Werror
SRCS        :=      srcs/parsing.c \
                          srcs/check_algo.c \
                          srcs/utils_1_1.c \
                          srcs/is_sorted.c \
                          srcs/check_dbl.c \
                          srcs/big_algo.c \
                          srcs/execute.c \
                          srcs/utils_1_2.c \
                          srcs/moves.c \
                          srcs/ft_split.c \
                          srcs/index.c \
                          srcs/main.c \
                          srcs/utils_1_3.c \
                          srcs/small_algo.c \
                          srcs/med_algo.c \
                          srcs/utils_1_0.c \
                          srcs/libft_utils.c \

OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re



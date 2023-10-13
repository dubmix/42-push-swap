# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:41:05 by pdelanno          #+#    #+#              #
#    Updated: 2023/10/13 17:19:58 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/push_swap.c \
		src/check_args.c \
		src/simple.c \
		src/complex.c \
		src/index.c \
		src/free.c \
		src/utils.c \
		src/algos/push.c \
		src/algos/swap.c \
		src/algos/rotate.c \
		src/algos/rotate_rev.c \
		src/libft/ft_atoi.c \
		src/libft/ft_lstadd_back.c \
		src/libft/ft_lstadd_front.c \
		src/libft/ft_lstlast.c \
		src/libft/ft_lstnew.c \
		src/libft/ft_lstsize.c \
		src/libft/ft_split.c \
		src/libft/ft_strlcpy.c \

OBJS = ${SRCS:.c=.o}

CFLAGS = -Werror -Wall -Wextra -g

.c.o:
				@cc ${CFLAGS} -c $^ -o $@

all:			${NAME}

$(NAME):		${OBJS}
						@cc ${OBJS} $(CFLAGS) -o $(NAME)
						@echo "\033[1;5mProgram is ready!\033[0m"

clean:
				@rm -f ${OBJS}

fclean:			clean
						@cd src/libft && rm -f ${NAME}
						@cd src/algos && rm -f ${NAME}
						@rm -f ${NAME}
						@echo "\033[1mAll clean!\033[0m"

re: fclean all

.PHONY: all clean fclean re


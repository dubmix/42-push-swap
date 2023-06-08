# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 11:41:05 by pdelanno          #+#    #+#              #
#    Updated: 2023/05/29 09:20:32 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/push_swap.c src/utils.c src/index.c src/algos/p.c src/algos/s.c \
src/algos/r.c src/algos/rr.c src/simple.c src/check_args.c src/complex.c \
src/free.c lib_ft/ft_atoi.c lib_ft/ft_lstadd_back.c lib_ft/ft_lstadd_front.c \
lib_ft/ft_lstlast.c lib_ft/ft_lstnew.c lib_ft/ft_lstsize.c lib_ft/ft_split.c \
lib_ft/ft_strlcpy.c printf/flags.c printf/ft_eval_format.c \
printf/ft_print_address.c printf/ft_print_char.c printf/ft_printf.c \
printf/ft_print_hexalo.c printf/ft_print_hexaup.c printf/ft_print_int.c \
printf/ft_print_str.c printf/ft_print_unsignedint.c

OBJS = ${SRCS:.c=.o}

HEADERS = push_swap.h

CFLAGS = -g -Werror -Wall -Wextra

.c.o:
				@cc ${CFLAGS} -c $^ -o $@

all:			${NAME}

$(NAME):		${OBJS}
						@cc ${OBJS} $(CFLAGS) -o $(NAME)
						@echo "Program is ready!"

clean:
				@rm -f ${OBJS}

fclean:			clean
						@cd lib_ft && rm -f ${NAME}
						@cd printf && rm -f ${NAME}
						@cd src && rm -f ${NAME}
						@rm -f ${NAME}
						@echo "All clean!"

re: fclean all

.PHONY: all clean fclean re


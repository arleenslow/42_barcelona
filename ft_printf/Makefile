# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 13:47:57 by atorregr          #+#    #+#              #
#    Updated: 2024/02/20 16:44:38 by atorregr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_digits.c \
		ft_print_ptr.c \
		ft_print_unsigned.c \
		ft_print_hexa_low.c \
		ft_print_hexa_up.c \

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o : %.c Makefile ft_printf.h
		${CC} ${CFLAGS} -c $<

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

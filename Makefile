# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:45:59 by gdandele          #+#    #+#              #
#    Updated: 2024/05/04 13:37:21 by gdandele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Werror -Wextra

SRC = ${wildcard src/**/ft_*.c}

OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -I include -c $< -o $@

test: all
	bash test/script.sh

norme:
	norminette -R CheckDefine src

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: test bonus fclean re

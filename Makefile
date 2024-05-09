# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdandele <gdandele@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:45:59 by gdandele          #+#    #+#              #
#    Updated: 2024/05/07 22:25:51 by gdandele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Werror -Wextra

SRC = ${wildcard src/**/ft_*.c}

OBJS = $(patsubst src/%.c,obj/%.o,$(SRC))

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

obj/%.o: src/%.c
	@mkdir -p ${dir $@}
	${CC} ${CCFLAGS} -I include -c $< -o $@

test: all
	bash test/script.sh

norme:
	norminette -R CheckDefine src include

clean:
	rm -rf obj

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: test bonus fclean re

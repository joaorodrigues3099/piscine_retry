# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 19:19:29 by joao-alm          #+#    #+#              #
#    Updated: 2024/09/02 19:19:33 by joao-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard srcs/*.c)
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	-norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: c.o all clean fclean re norm
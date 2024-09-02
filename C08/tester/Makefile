# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 02:15:25 by joao-alm          #+#    #+#              #
#    Updated: 2024/09/02 13:56:05 by joao-alm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ../ex04/ft_strs_to_tab.c ../ex05/ft_show_tab.c main.c
OBJS	= ${SRCS:.c=.o}
INCS	= .
NAME	= ft_show_tab
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	gcc -o ${NAME} ${OBJS} ${CFLAGS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
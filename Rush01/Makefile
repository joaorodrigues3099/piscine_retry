SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
INCS = .
NAME = rush-01
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: .c.o all clean fclean re
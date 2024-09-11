SRCS = $(wildcard srcs/*.c)
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = do-op
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
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
SRCS	= $(wildcard srcs/*.c)
OBJS	= ${SRCS:.c=.o}
NAME	= ft_cat
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} $< -o $@

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: .c.o all clean fclean
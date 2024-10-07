
SCRS	= srcs/main.c

OBJS	= ${SCRS:.c=.o}

NAME	= rush-02

.c.o:	${CC} -c $< -o ${<:.c=.o}

CC		= gcc -Wall -Wextra -Werror -I includes

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean


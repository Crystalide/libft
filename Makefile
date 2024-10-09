
SCRS	= srcs/ft_*.c

OBJS	= ${SCRS:.c=.o}

NAME	= libft

.c.o:	${CC} -c $< -o ${<:.c=.o}

CC		= cc -Wall -Wextra -Werror

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

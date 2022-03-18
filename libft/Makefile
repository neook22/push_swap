
NAME = libft.a

SRCS = 	ft_atoi.c ft_isalnum.c ft_isdigit.c\
		ft_putstr_fd.c ft_putchar_fd.c ft_split.c ft_strdup.c\
		ft_strlen.c ft_substr.c\
		ps_strcmp.c ps_strjoin.c\

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

PHONY:	re flcean clean all
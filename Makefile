NAME = push_swap

SRCS = 	main.c checks_input/ps_check_ml_args.c checks_input/ps_check_smp_arg.c checks_input/ps_count_elements.c checks_input/ps_free_elements.c\
		srcs/sort_addons/ps_create_stack.c srcs/sort_addons/ps_sort.c srcs/sort_addons/ps_index_array.c srcs/algorithms/ps_radix_sort.c srcs/algorithms/ps_short_sort.c\
		srcs/operations/ps_push_a.c srcs/operations/ps_push_b.c srcs/operations/ps_rev_rotate_a.c\
		srcs/operations/ps_rev_rotate_b.c srcs/operations/ps_rev_rotate_ab.c srcs/operations/ps_rotate_a.c\
		srcs/operations/ps_rotate_b.c srcs/operations/ps_rotate_ab.c srcs/operations/ps_swap_a.c\
		srcs/operations/ps_swap_b.c srcs/operations/ps_swap_ab.c\

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

LIB = -Llibft/ -lft


all:	${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): ${OBJS}
		make -C libft/
		${CC} ${CFLAGS} ${OBJS} ${LIB} -o ${NAME}

clean:
		make clean -C libft/
		${RM} ${OBJS}

fclean:	clean
		make fclean -C libft/
		${RM} ${NAME}

re:		fclean all

PHONY:	re flcean clean all

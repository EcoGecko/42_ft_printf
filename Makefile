#NAME
	NAME=libftprintf.a

#COMPILING
CC=cc
CFLAGS=-Wall -Werror -Wextra

#Directories
SRCS_DIR=srcs/
INCLUDE=-I./includes
OBJS_DIR=obj/
LIBFT_DIR=libft
LIBFT=libft.a

#Sources
SRCF=ft_printf ft_print_chars ft_print_nbrs ft_nbr_utils ft_print_ptr

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCF)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCF)))


all: ${OBJS_DIR} ${NAME}

${NAME}: ${OBJS}
	${MAKE} bonus -C ${LIBFT_DIR}
	cp libft/libft.a ./${NAME}
	ar rs ${NAME} ${OBJS}

${OBJS_DIR}%.o: ${SRCS_DIR}%.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

${OBJS_DIR}:
	mkdir -p ${OBJS_DIR}

bonus: all

clean:
	rm -rf ${OBJS_DIR}
	make fclean -C ${LIBFT_DIR}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
#.SILENT:

# test: all clean
# 	cc -g srcs/* main.c ${INCLUDE} -L. -lftprintf
# 	./a.out

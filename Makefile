NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC_FILES = ft_printf.c ft_printhex.c ft_printptr.c\
			ft_printuns.c ft_printchar.c ft_printnbr.c ft_printstr.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	make -C libft
	make -C libft bonus
	$(CC) -c $(CFLAGS) $(SRC_FILES)
	ar -rcs $(NAME) $(OBJ_FILES) libft/*.o

clean:
	rm -f $(OBJ_FILES)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re

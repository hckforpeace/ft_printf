SRCS = ft_printf.c ft_utils.c ft_formats.c ft_flags.c
NAME = libftprintf.a
OBJ = $(SRCS:.c=.o)
AR = ar
OPT = -rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: all

$(NAME): $(addprefix src/, $(OBJ))
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(OPT) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes

clean:
	make clean -C libft
	rm -f $(addprefix src/, $(OBJ))

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all


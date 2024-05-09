SRCS = ft_printf.c ft_utils.c ft_formats.c ft_flags.c
NAME = libftprintf.a
OBJ = $(SRCS:.c=.o)
LIBFT = libft
AR = ar
OPT = -rcs
CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): libft.a $(OBJ)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(OPT) $(NAME) $(OBJ)

libft.a :
	make -C libft

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I ./includes -L$(LIBFT) -l$(LIBFT)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all


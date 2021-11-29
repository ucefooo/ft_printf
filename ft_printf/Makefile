NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putnbrdecimal.c \
		ft_putstr.c \
		ft_puttohexa.c \
		ft_putunsigned.c \
		ft_putvoid.c \
		calc.c \
		calchexa.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(FLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
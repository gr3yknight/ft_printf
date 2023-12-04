NAME = libftprintf.a

CC = cc

CFLAGS = -Werror -Wall -Wextra

SRCS = ft_putchar.c ft_putstr.c ft_puthex.c ft_putchex.c ft_putnbr.c ft_putptr.c ft_unsigned.c ft_spf.c \
ft_printf.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
NAME= libftprintf.a

CC= cc

CFLAGS= -Werror -Wall -Wextra

SRCS= 

# BSRCS += 

OBJS=$(SRCS:.c=.o)
$(NAME): $(OBJS)
		ar -rc $(NAME) $(OBJS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
COMPILE = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SOURCES = ft_printf.c ft_putchar.c ft_putnbr_ux.c\
		 ft_putnbr.c ft_putptr.c ft_putstr.c ft_strlen.c\
		 ft_strchr.c ft_substr.c ft_checkinvalid.c ft_bzero.c

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

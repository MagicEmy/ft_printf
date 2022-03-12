NAME := libftprintf.a
HEADERS := ft_printf.h
SRC :=	main.c ft_printf.c ft_putnbr.c
OBJ	:= $(SRC:.c=.o)
OBJBONUS = ${BONUS:.c=.o}
CC := gcc
CFLAGS := -Wall -Wextra -Werror
LIBC := ar -rcs

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(LIBC) $(NAME) $(OBJ)
%.o: %.c 
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -f $(OBJ) ${OBJBONUS}

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

#all:
#	gcc -Wall -Werror -Wextra main.c ft_printf.c ft_putnbr.c -g
#exec: $(NAME)
#	$(CC) $(CFLAGS) -o $(NAME) main.c -lft -L. -I
#	./$(NAME)
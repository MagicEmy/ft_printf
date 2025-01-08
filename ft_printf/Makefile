NAME := libftprintf.a
HEADERS := ft_printf.h
SRC := ft_conversions_char.c ft_conversions_numbers.c ft_printf.c
MAIN_SRC := main.c
OBJ := $(SRC:.c=.o)
MAIN_OBJ := $(MAIN_SRC:.c=.o)
CC := gcc
CFLAGS := -Wall -Wextra -Werror
LIBC := ar -rcs
EXEC := ft_printf

UNITY_PATH = ../Unity
UNITY_SRC = $(UNITY_PATH)/src/unity.c
UNITY_INC = -I$(UNITY_PATH)/src/unity.h

all: $(NAME) $(EXEC)

$(NAME): $(OBJ) $(HEADERS)
	$(LIBC) $(NAME) $(OBJ)

$(EXEC): $(MAIN_OBJ) $(NAME)
	$(CC) $(CFLAGS) -o $(EXEC) $(MAIN_OBJ) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

TEST_EXEC := test_ft_printf

test: $(TEST_EXEC)

$(TEST_EXEC): test_ft_printf.c $(NAME)
	$(CC) $(CFLAGS) $(UNITY_INC) -o $(TEST_EXEC) test_ft_printf.c $(NAME) $(UNITY_SRC)

run_test: test
	./$(TEST_EXEC)

clean:
	rm -f $(OBJ) $(MAIN_OBJ)

fclean: clean
	rm -f $(NAME) $(EXEC) $(TEST_EXEC)

re: fclean all

.PHONY: all clean fclean re

#all:
#	gcc -Wall -Werror -Wextra main.c ft_conversions_char.c ft_conversions_numbers.c ft_printf.c -g && ./a.out
#
#exec: $(NAME)
#	$(CC) $(CFLAGS) -o $(NAME) main.c -lft -L. -I
#	./$(NAME)
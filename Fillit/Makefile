NAME = fillit
CC = gcc
CFLAGS = -Werror -Wextra -Wall
LIB = libft.a
OBJ = fillit.o solution.o misc.o main.o valid.o read.o bitfield.o operators.o
SRC = fillit.c solution.c misc.c main.c valid.c read.c bitfield.c operators.c

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

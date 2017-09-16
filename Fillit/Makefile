NAME = fillit
CC = gcc
CFLAGS = -Werror -Wextra -Wall
LIB = Lib_ft/libft.a
OBJ = fillit.o solution.o misc.o main.o valid.o read.o bitfield.o operators.o
SRC = fillit.c solution.c misc.c main.c valid.c read.c bitfield.c operators.c

all: $(NAME)

$(NAME): $(OBJ)
	make -C  ./Lib_ft/
	$(CC) $(OBJ) $(LIB) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)
	rm -f Lib_ft/*.o 

fclean: clean
	rm -f $(NAME)
	rm -f Lib_ft/libft.a

re: fclean all

NAME = Test
FLAGS = -Wall -Werror -Wextra
FILES = get_next_line.c testmain.c
molly:
	make -C ./libft
	gcc -o $(NAME) $(FILES) -L./libft -lft $(FLAGS)

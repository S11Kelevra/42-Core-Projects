# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramirez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 13:28:33 by eramirez          #+#    #+#              #
#    Updated: 2017/06/06 15:42:20 by eramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

HDR = ./*.h

SRC = ./ft*.c

FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -include $(HDR) $(SRC) && ar rc $(NAME) *.o

clean:
	rm -rf ft*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

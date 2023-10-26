# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/10/24 15:31:43 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRC = main.cpp  Fixed.cpp
OBJ	= $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98
# CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
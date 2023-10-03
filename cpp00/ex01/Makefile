# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/07/31 09:03:25 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = book

SRC = main.cpp
OBJ	= $(SRC:.cpp=.o)

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
CC = g++


all:  $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
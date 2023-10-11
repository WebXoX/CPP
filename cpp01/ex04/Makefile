# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/10/11 12:37:11 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

SRC = main.cpp 
OBJ	= $(SRC:.cpp=.o)

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
CC = g++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o *.replace

fclean:
	rm -f $(NAME) *.o *.replace

re:     fclean all
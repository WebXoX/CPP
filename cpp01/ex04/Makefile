# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/12/13 14:53:33 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

SRC = main.cpp 
OBJ	= $(SRC:.cpp=.o)

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
CC = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o *.replace

fclean:
	rm -f $(NAME) *.o *.replace

re:     fclean all
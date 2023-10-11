# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/10/11 15:38:03 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = harl

SRC = main.cpp  Harl.cpp
OBJ	= $(SRC:.cpp=.o)

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CC = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2024/01/11 09:53:52 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRC = main.cpp
OBJ	= $(SRC:.cpp=.o)

CXXFLAGS = -g3 -Wall -Wextra -Werror -std=c++98
CXX = g++


all:  $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
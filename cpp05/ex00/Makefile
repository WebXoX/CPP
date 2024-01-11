# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/11/07 10:57:21 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

SRC = Animal.cpp Dog.cpp  Cat.cpp  notAnimal.cpp notCat.cpp main.cpp
OBJ	= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
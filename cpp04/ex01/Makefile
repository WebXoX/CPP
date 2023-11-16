# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/11/16 14:51:51 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Animal

SRC = Animal.cpp Dog.cpp  Cat.cpp  WrongAnimal.cpp WrongCat.cpp  Brain.cpp main.cpp
OBJ	= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
# -fsanitize=address -g3
CXX = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2024/02/15 15:27:05 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

SRC =  main.cpp PmergeMe.cpp
OBJ	= $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
CXX = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
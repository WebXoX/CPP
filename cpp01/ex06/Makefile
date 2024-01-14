# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2023/12/13 11:49:39 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = harlFilter

SRC = main.cpp  Harl.cpp
OBJ	= $(SRC:.cpp=.o)

CXXFLAGS = -g3 -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
CXX = c++


all:  $(OBJ) $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o 

fclean:
	rm -f $(NAME) *.o 

re:     fclean all
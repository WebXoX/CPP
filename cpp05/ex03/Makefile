# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperinch <jperinch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 12:01:22 by jperinch          #+#    #+#              #
#    Updated: 2024/01/29 10:49:10 by jperinch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Intern

SRC =  main.cpp AForm.cpp  Bureaucrat.cpp    Intern.cpp      ShrubberyCreationForm.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp 
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
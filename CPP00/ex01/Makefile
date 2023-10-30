# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 15:23:21 by ajoliet           #+#    #+#              #
#    Updated: 2023/10/26 13:55:00 by ajoliet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = PhoneBook.cpp \
	  Contact.cpp \
	  main.cpp

OBJ = $(SRC:%.cpp=%.o)

CXX = c++

CXXFLAGS = -ggdb -Wall -Wextra -Werror -std=c++98

all = $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

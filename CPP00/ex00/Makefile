# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoliet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 15:23:21 by ajoliet           #+#    #+#              #
#    Updated: 2023/10/26 14:08:10 by ajoliet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) -c $(FLAGS) $< -o $@	

all = $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

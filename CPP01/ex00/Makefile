NAME = BraiiiiiiinnnzzzZ

SRC = main.cpp \
	  Zombie.cpp

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

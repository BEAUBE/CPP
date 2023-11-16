NAME = Brain

SRC = main.cpp \

OBJ = $(SRC:%.cpp=%.o)

CXX = c++

CXXFLAGS = -ggdb -std=c++98 # -Wall -Wextra -Werror

all = $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

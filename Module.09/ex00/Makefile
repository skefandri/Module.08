NAME = btc

SRC =  main.cpp 
CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp *.hpp *.tpp
		$(CXX) $(CXXFLAGS) -c $< -o $@


clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
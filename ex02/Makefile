NAME = Brain
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g #-std=c++98

HEADER = \
Animal.hpp \
Cat.hpp \
Dog.hpp \
WrongAnimal.hpp \
WrongCat.hpp \
Brain.hpp

SRCS = \
Animal.cpp \
Cat.cpp \
Dog.cpp \
WrongAnimal.cpp \
WrongCat.cpp \
Brain.cpp \
main.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
	c++ $(OBJS) $(FLAGS) -o $(NAME)



%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

# test: all
# 	./$(NAME)


.PHONY: all clean fclean re test
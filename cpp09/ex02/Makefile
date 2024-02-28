NAME = PmergeMe
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf PmergeMe PmergeMe.dSYM
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re
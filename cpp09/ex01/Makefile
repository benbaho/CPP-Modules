NAME = RPN
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf RPN RPN.dSYM
	
fclean: clean
	rm -rf PmergeMe.dSYM

re: fclean all

.PHONY: all clean fclean re

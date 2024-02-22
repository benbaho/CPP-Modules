NAME = easyfind
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf easyfind easyfind.dSYM
	
re: clean all

.PHONY: all clean re
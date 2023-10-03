NAME = scavtrap
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -g -Wall -Wextra -Werror -std=c++98

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf scavtrap scavtrap.dSYM  
	
re: all

.PHONY: all clean re
NAME = claptrap
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -g -Wall -Wextra -Werror -std=c++98

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf claptrap claptrap.dSYM
	
re: all

.PHONY: all clean re
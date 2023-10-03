NAME = fixed
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -g -Wall -Wextra -Werror -std=c++98

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf fixed fixed.dSYM
	
re: all

.PHONY: all clean re
NAME = iter
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf iter iter.dSYM
	
re: clean all

.PHONY: all clean re
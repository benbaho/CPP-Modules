NAME = serialization
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf serialization serialization.dSYM
	
re: all

.PHONY: all clean re
NAME = brain
SRCS = $(wildcard *.cpp)
COMPILER = c++ -g -Wall -Wextra -Werror -std=c++98

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf brain
	
re: fclean all

.PHONY: all clean re
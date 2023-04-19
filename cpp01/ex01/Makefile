NAME = zombie
SRCS = $(wildcard *.cpp)
COMPILER = c++ -g -Wall -Wextra -Werror -std=c++98

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf zombie
	
re: fclean all

.PHONY: all clean re
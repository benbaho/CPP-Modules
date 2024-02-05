NAME = bureaucrat
SRCS = $(shell find . -name "*.cpp")
COMPILER = c++ -std=c++98 -Wall -Wextra -Werror 

all:
	$(COMPILER) $(SRCS) -o $(NAME)

clean:
	rm -rf bureaucrat bureaucrat.dSYM *_shrubbery
	
re: all

.PHONY: all clean re
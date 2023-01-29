NAME	= megaphone
CC		= g++
FLAG	= -Wall -Werror -Wextra
SRC		= $(shell find . -name '*.cpp')
OBJ		= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) -g $(CFLAGS) -c $< -o $@

test_case: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

clean:
	@rm -rf  $(shell find . -name '-.o')

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean test_case all
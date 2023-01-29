NAME	= bookphone
CC		= g++
FLAG	= -Wall -Werror -Wextra
SRC		= $(shell find . -name '*.cpp')
OBJ		= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) -g $(CFLAGS) -c $< -o $@

clean:
	@rm -rf  $(shell find . -name '-.o')

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean  all
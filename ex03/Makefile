SRC = main.cpp
SRC += Fixed.cpp
SRC += Point.cpp
SRC += bsp.cpp
NAME = bsp
CC = c++ -I. -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
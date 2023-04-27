CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME	= Warlock
SRC		= main.cpp Warlock.cpp

OBJ		= $(SRC:.cpp=.o)

all:
	@$(MAKE) -j $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o : %.cpp
	$(CC) -c $(FLAGS) $(SRC) $< -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
RED = \033[1;38;5;168m
BLU = \033[3;38;5;146m
RES = \033[0m

NAME :=	animal

INC := Animal.hpp Dog.hpp Cat.hpp Brain.hpp

FLAGS := -Wall -Wextra -Werror

SRC := main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(RED) \n ┌───────────────┐\n │ \xe2\x99\xa5 compiling \xe2\x99\xa5 │\n └───────────────┘\n$(RES)"
	@g++ -fsanitize=address $(FLAGS) -o $(NAME) $(SRC)

clean:
	@echo "$(RED) \n ┌──────────────────────┐\n │     \xe2\x99\xa5 make clean \xe2\x99\xa5   │\n └──────────────────────┘\n$(RES)$(BLU)"
	@$(RM) $(OBJ)
	@echo "$(RES)"

fclean: clean
	@echo "$(RED) \n ┌──────────────────────┐\n │    \xe2\x99\xa5 make fclean \xe2\x99\xa5   │\n └──────────────────────┘\n$(RES)"
	@$(RM) $(NAME)

re: fclean all
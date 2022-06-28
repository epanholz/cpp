RED = \033[1;38;5;168m
BLU = \033[3;38;5;146m
RES = \033[0m

NAME :=	materia

INC := AMateria.hpp ICharacter.hpp Cure.hpp Ice.hpp IMateriaSource.hpp

FLAGS := -Wall -Wextra -Werror

SRC := main.cpp AMateria.cpp ICharacter.cpp Cure.cpp Ice.cpp IMateriaSource.cpp

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
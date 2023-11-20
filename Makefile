#color and formatting definitions:
BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
MAGEN =	\033[35m
YELLOW =\033[33m
CYAN =	\033[36m
BLUE =	\033[34m
WHITE =	\033[37m
NC =	\033[0m

#name
NAME = 		gameoflife

# compiler
CC =		c++
CFLAGS =	-Wall -Wextra -Werror

#Includes
INC =	-I ./include/

#sources
SRC_PATH =	src/
SRC = 	main.cpp configurations.cpp grid.cpp
	
SRCS =	$(addprefix $(SRC_PATH), $(SRC))

#objects
OBJ_PATH =	obj/
OBJ =		$(SRC:.cpp=.o)
OBJS =		$(addprefix $(OBJ_PATH), $(OBJ))


all: $(NAME)

$(OBJ_PATH)%.o :$(SRC_PATH)%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS): $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	@echo "$(BOLD)$(GREEN)[ 🙊 Compiling ... ]$(NC)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INC)
	@echo "$(BOLD)$(GREEN)[ 🪄 Program ready! ]$(NC)"
	@echo "$(BOLD)$(GREEN)                                                "
	@echo "   ______                              ____   __    _ ____     "
	@echo "  / ____/___ _____ ___  ___     ____  / __/  / /   /_/ __/__   "
	@echo " / / __/ __  / __  __ \/ _ \   / __ \/ /_   / /   / / /_/ _ \  "
	@echo "/ /_/ / /_/ / / / / / /  __/  / /_/ / __/  / /___/ / __/  __/  "
	@echo "\____/\__,_/_/ /_/ /_/\___/   \____/_/    /_____/_/_/  \___/   "
	@echo "                                                               "
	@echo " run ./gameoflife <configuration> <generations>                "
	@echo "                                                               "
	@echo " available configurations:                                     "
	@echo " 1. glider                                                     "
	@echo " 2. gun                                                        "
	@echo " 3. frog                                                       "
	@echo " 4. five                                                       "
	@echo "                                   $(NC)"

clean:
	@echo "$(BOLD)$(RED)[ 🔥 Purging object files ]$(NC)"
	@rm -Rf $(OBJ_PATH)

fclean: clean
	@echo "$(BOLD)$(RED)[ 🔥 Removing program ]$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
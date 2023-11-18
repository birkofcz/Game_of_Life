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
SRC = 	main.cpp
	
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
	@echo "$(BOLD)$(GREEN)                        "
	@echo "              _                         "
	@echo "             | |                        "
	@echo "__      _____| |__  ___  ___ _ ____   __"
	@echo "\ \ /\ / / _ \ '_ \/ __|/ _ \ '__\ \ / /"
	@echo " \ V  V /  __/ |_| \__ \  __/ |   \ V / "
	@echo "  \_/\_/ \___|_.__/|___/\___|_|    \_/  "
	@echo "                                        "
	@echo "                                        "
	@echo " run ./gameoflife <config_file>         "
	@echo "                                   $(NC)"
 

bonus: all

clean:
	@echo "$(BOLD)$(RED)[ 🔥 Purging object files ]$(NC)"
	@rm -Rf $(OBJ_PATH)

fclean: clean
	@echo "$(BOLD)$(RED)[ 🔥 Removing program ]$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: emanuela <emanuela@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/27 11:36:23 by emanuela      #+#    #+#                  #
#    Updated: 2023/12/20 20:00:06 by emlicame      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME 		= Iter

INCLUDE_DIR = include

SRC_DIR		= src
OBJ_DIR		= obj
DEP_DIR		= dep

SRC 		= main.cpp
OBJ 		= $(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEP 		= $(SRC:%.cpp=$(DEP_DIR)/%.d)

CC 			= c++
FLAGS 		= -Wall -Werror -Wextra
FLAGS 		+= -std=c++98
# FLAGS 		+= -fsanitize=address

INC 		= -I $(INCLUDE_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(INC) $(FLAGS) $(OBJ) -o $(NAME)

-include $(DEP)

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR) $(DEP_DIR)
	@$(CC) $(INC) $(FLAGS) -MMD -MF $(DEP_DIR)/$*.d -c $< -o $@

$(OBJ_DIR) $(DEP_DIR):
	@mkdir -p $@

clean:
	@rm -f $(OBJ)
	@rm -rf obj
	@rm -rf $(DEP_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

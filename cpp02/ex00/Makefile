# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 16:39:03 by toferrei          #+#    #+#              #
#    Updated: 2025/07/25 10:21:03 by toferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	FixedPoint

SOURCE		=	main.cpp \
				Fixed.cpp


OBJ_DIR		=	Objects/

OBJECTS		=	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SOURCE))

CXX			=	c++
CPPFLAGS		=	-Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CXX) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo "All files were created"

$(OBJ_DIR)%.o: %.cpp 
	@mkdir -p $(dir $@)
	@$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)
	@rm -rf $(OBJ_DIR)
	@echo "Object files were cleaned"

# Full clean
fclean: clean
	@rm -f $(NAME)
	@echo "All files were cleaned"

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
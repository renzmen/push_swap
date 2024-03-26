# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 12:53:46 by lorenzo           #+#    #+#              #
#    Updated: 2024/03/26 09:55:39 by lorenzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= gcc -g
FLAGS		= -Wall -Werror -Wextra
INCLUDES	= -I./includes/ -I./libft/includes/
SRC_DIR		= ./src/
OBJ_DIR 	= ./obj/
LIBFT_DIR	= ./libft/
LIBRARIES	= -L./libft -lft
SRC_FILES	= push_swap.c ctrl_input.c free.c operation.c operation2.c \
			utlis.c utils2.c sort.c new.c
OBJ_FILES	= $(SRC_FILES:.c=.o)
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT		= $(addprefix $(LIBFT_DIR),libft.a)

all: $(NAME)

$(NAME): $(LIBFT) pushswap

$(LIBFT):
	(cd $(LIBFT_DIR) && make)
	
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

pushswap: | $(OBJ_DIR) $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) $(OBJS) -o push_swap $(INCLUDES) $(LIBRARIES)

$(OBJ_DIR)%o: $(SRC_DIR)%c
	$(CC) $(FLAGS) -c $< -o $@ $(INCLUDES) 

clean:
	(cd $(LIBFT_DIR) && make clean)
	rm -f $(OBJS)
	-rmdir $(OBJ_DIR)
	
fclean: clean
	(cd $(LIBFT_DIR) && make fclean)
	rm -f $(NAME)
	
re: fclean all
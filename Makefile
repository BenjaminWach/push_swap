# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 11:02:40 by bwach             #+#    #+#              #
#    Updated: 2023/12/14 15:39:42 by bwach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBFT_DIR = libft

SRC_FILES = push_swap.c\
			valid_argv.c\
			all_utils.c\
			all_utils2.c\
			brute_sort_utils.c brute_sort_utils2.c\
			push.c rotate.c swap.c reverse_rot.c\
			give_index.c\
			radix_sort.c brute_sort.c\

OBJ = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIBFT_DIR) -lft	
	@echo "Compilation done"

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(LIBFT_DIR)
	
clean: 
	$(RM) $(OBJ)
	@make clean -C ${LIBFT_DIR}
	@echo "Clean done"
	
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_DIR)/libft.a
	@echo "Fclean done"

re: fclean all

.PHONY: clean fclean re        
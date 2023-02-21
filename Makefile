# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 15:27:16 by gmarchal          #+#    #+#              #
#    Updated: 2023/02/21 10:49:03 by gmarchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES =	main.c \
		push.c \
		swap.c \
		reverse_rotate.c \
		rotate.c \
		utils.c \
		utils2.c \
		radix.c \
		normalize_stack.c \
		errors.c \
#		min_sort.c \
		parsing.c \
		parsing_utils.c \

SRCS= $(addprefix src/, $(FILES))

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

###LIB INCLUDES###

LIBFT_DIR = Libft

LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf

PRINTF = $(PRINTF_DIR)/libftprintf.a

$(NAME): $(OBJ)
				make -C $(LIBFT_DIR)
				make -C $(PRINTF_DIR)
				cc $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

.c.o:
		cc $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME) 

clean:
		make clean -C $(LIBFT_DIR)
		make clean -C $(PRINTF_DIR)
		rm -rf $(OBJ)

fclean: clean
		make fclean -C $(LIBFT_DIR)
		make fclean -C $(PRINTF_DIR)
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

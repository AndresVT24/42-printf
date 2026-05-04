# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/02 14:13:40 by ervillca          #+#    #+#              #
#    Updated: 2026/05/04 18:58:28 by ervillca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===== BASIC SETUP =====

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# ===== FILE LISTS ====

SRCS = ft_printf.c \
       ft_check_sign.c \
       ft_sum_str_p1.c \
       ft_sum_str_p2.c

OBJS = $(SRCS:.c=.o)

# ===== BUILD RULES =====
# Default command: just type 'make' to build everything

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

# ===== CLEANUP RULES =====

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re

# ===== COMMANDS =====
# - Make		builds the program creating .o files (all)
# - Make clean		cleans the program removing .o files
# - Make fclean		cleans the program removing .o & libft.a
# - Make re		builds + cleans
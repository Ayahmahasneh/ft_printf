# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalmahas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 09:09:38 by aalmahas          #+#    #+#              #
#    Updated: 2024/09/30 12:56:31 by aalmahas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_printf.c ft_putchar.c ft_putstr.c puthexadecimal.c ft_putunbr.c ft_putnbr.c
# Object files
OBJS = $(SRCS:.c=.o)

# Executable name (static library)
NAME = libftprintf.a

# Default rule
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets to avoid conflicts with files named 'clean', 'fclean', 're'
.PHONY: all clean fclean re


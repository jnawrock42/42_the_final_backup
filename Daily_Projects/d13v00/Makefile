# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 13:22:45 by jkeeler           #+#    #+#              #
#    Updated: 2019/11/05 13:22:47 by jkeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = \
	~/useful_functions/srcs/ft_atoi.c \
	~/useful_functions/srcs/ft_putchar.c \
	~/useful_functions/srcs/ft_putnbr.c \
	~/useful_functions/srcs/ft_putstr.c \
	~/useful_functions/srcs/ft_str_is_alpha.c \
	~/useful_functions/srcs/ft_strcapitalize.c \
	~/useful_functions/srcs/ft_strcmp.c \
	~/useful_functions/srcs/ft_strcpy.c \
	~/useful_functions/srcs/ft_strlen.c \
	~/useful_functions/srcs/ft_strlowcase.c \
	~/useful_functions/srcs/ft_strncpy.c \
	~/useful_functions/srcs/ft_strupcase.c \
	~/useful_functions/srcs/ft_swap.c
INCLUDES = ~/useful_functions/includes/
OBJECTS = \
	ft_atoi.o \
	ft_putchar.o \
	ft_putnbr.o \
	ft_putstr.o \
	ft_str_is_alpha.o \
	ft_strcapitalize.o \
	ft_strcmp.o \
	ft_strcpy.o \
	ft_strlen.o \
	ft_strlowcase.o \
	ft_strncpy.o \
	ft_strupcase.o \
	ft_swap.o
WGCC = gcc -Wextra -Wall -Werror
NORM = 	norminette

all: $(NAME)

$(NAME):
	@$(WGCC) -c -I $(INCLUDES) $(SRC)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean: $(NAME)
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

test: $(NAME)
	@$(WGCC) -o jk $(NAME) main.c ex00/btree_create_node.c ./ex03/*.c
	@rm -f $(OBJECTS)
	$(NORM)
	@./jk
	@rm jk

re: fclean all

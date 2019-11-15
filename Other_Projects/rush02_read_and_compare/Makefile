# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 15:10:33 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/09 15:10:35 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = colle-2
INCLUDES = ./sources
SRC = \
	$(EXE_NAME).c \
	$(INCLUDES)/ft_box_comparison.c \
	$(INCLUDES)/ft_create_elem.c \
	$(INCLUDES)/ft_putchar.c \
	$(INCLUDES)/ft_putnbr.c \
	$(INCLUDES)/ft_putstr.c \
	$(INCLUDES)/ft_reading_stuff.c \
	$(INCLUDES)/ft_strcmp.c \
	$(INCLUDES)/ft_strlen.c \
	$(INCLUDES)/rush00_0.c \
	$(INCLUDES)/rush00_1.c \
	$(INCLUDES)/rush00_2.c \
	$(INCLUDES)/rush00_3.c \
	$(INCLUDES)/rush00_4.c
O_FILES = \
	$(EXE_NAME).o \
	ft_box_comparison.o \
	ft_create_elem.o \
	ft_putchar.o \
	ft_putnbr.o \
	ft_putstr.o \
	ft_reading_stuff.o \
	ft_strcmp.o \
	ft_strlen.o \
	rush00_0.o \
	rush00_1.o \
	rush00_2.o \
	rush00_3.o \
	rush00_4.o 
WGCC = gcc
foof =  -Wall -Werror -Wextra
NORM = 	norminette

all: $(EXE_NAME)

$(EXE_NAME): $(O_FILES)
	@$(WGCC) -o $(EXE_NAME) $(O_FILES)

$(O_FILES):
	@$(WGCC) -c -I $(INCLUDES) $(SRC)

fclean: clean
	@/bin/rm -f $(EXE_NAME)

clean:
	@/bin/rm -f $(O_FILES)

test: fclean all
	@./joetest | ./$(EXE_NAME)
	@/bin/rm -f $(EXE_NAME)
	@/bin/rm -f $(O_FILES)
	norminette

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 13:16:47 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/14 13:16:50 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = print_hello
SRC_PATH = ~/42_the_final_backup/Other_Projects/exam_prep/the_basics/
INCLUDES = $(SRC_PATH)
SOURCES = \
	$(EXE_NAME).c \
	$(SRC_PATH)ft_putnbr.c \
	$(SRC_PATH)ft_putstr.c
O_FILES = \
	$(EXE_NAME).o \
	ft_putnbr.o \
	ft_putstr.o
HEADER = $(SRC_PATH)
WGCC = gcc -Wall -Wextra -Werror

all: $(EXE_NAME)

$(EXE_NAME): $(O_FILES)
	@$(WGCC) -o $(EXE_NAME) $(O_FILES)

$(O_FILES):
	@$(WGCC) -c $(SOURCES) -I $(INCLUDES)

fclean: clean
	@/bin/rm -f $(EXE_NAME)

clean:
	@/bin/rm -f $(O_FILES)

test: fclean all
	./$(EXE_NAME)
	@/bin/rm -f $(EXE_NAME)
	@/bin/rm -f $(O_FILES)
	make fclean

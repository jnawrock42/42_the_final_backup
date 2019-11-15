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

TEST_PATH = ./level0/
TEST_Q = $(TEST_PATH)print_hello
EXE_NAME = joetest
SRC_PATH = ./the_basics/
SOURCES = \
	$(TEST_Q).c \
	$(SRC_PATH)ft_putnbr.c \
	$(SRC_PATH)ft_putstr.c
WGCC = gcc -c -Wall -Wextra -Werror -o

all: $(EXE_NAME)

$(EXE_NAME):
	$(WGCC) $(EXE_NAME) $(SOURCES)

clean:
	rm -f $(EXE_NAME)

test: clean all
	./$(EXE_NAME)
	rm -f $(EXE_NAME)

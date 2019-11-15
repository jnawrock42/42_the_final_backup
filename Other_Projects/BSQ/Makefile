# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 15:10:33 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/14 17:59:15 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = bsq
INCLUDES = ./sources
TESTS = ./tests/normal/
SRC = \
	$(EXE_NAME).c \
	$(INCLUDES)/ft_atoi.c \
	$(INCLUDES)/ft_file_to_str.c \
	$(INCLUDES)/ft_pipe_to_file.c \
	$(INCLUDES)/ft_output.c \
	$(INCLUDES)/ft_putnbr.c \
	$(INCLUDES)/ft_solver.c \
	$(INCLUDES)/ft_strcmp.c \
	$(INCLUDES)/ft_strlen.c
O_FILES = \
	$(EXE_NAME).o \
	ft_atoi.o \
	ft_file_to_str.o \
	ft_pipe_to_file.o \
	ft_output.o \
	ft_putnbr.o \
	ft_solver.o \
	ft_strcmp.o \
	ft_strlen.o
WGCC = gcc -Wall -Werror -Wextra
NORM = norminette

all: $(EXE_NAME)

$(EXE_NAME): $(O_FILES)
	@$(WGCC) -o $(EXE_NAME) $(O_FILES)

$(O_FILES):
	@$(WGCC) -c -I $(INCLUDES) $(SRC)

fclean: clean
	@/bin/rm -f $(EXE_NAME)

clean:
	@/bin/rm -f $(O_FILES)

test_pipe_in: fclean all
	time perl ./tests/perl_test.pl 5000 5000 1000 | ./$(EXE_NAME)
	@/bin/rm -f $(EXE_NAME)
	@/bin/rm -f $(O_FILES)
	#norminette

test_file_in: fclean all
	@time ./$(EXE_NAME) $(TESTS)test80x80x15
	@/bin/rm -f $(EXE_NAME)
	@/bin/rm -f $(O_FILES)
	norminette

re: fclean all

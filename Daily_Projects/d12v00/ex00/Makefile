# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 19:27:49 by jnawrock          #+#    #+#              #
#    Updated: 2019/11/06 19:27:51 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_NAME = ft_display_file
SRC = \
	$(EXE_NAME).c \
	ft_putstr.c \
	ft_put_err_str.c \
	ft_strlen.c
O_FILES = \
	$(EXE_NAME).o \
	ft_putstr.o \
	ft_put_err_str.o \
	ft_strlen.o
GCCFLAG = -Wall -Werror -Wextra

all: $(EXE_NAME)

$(EXE_NAME): $(O_FILES)
	gcc $(GCCFLAG) -o $(EXE_NAME) $(O_FILES)

$(O_FILES):
	gcc $(GCCFLAG) -c $(SRC)	

fclean: clean
	/bin/rm -f $(EXE_NAME)

clean:
	/bin/rm -f $(O_FILES)

test: fclean all
	./$(EXE_NAME)
	/bin/rm -f $(O_FILES)
	/bin/rm -f $(EXE_NAME)
	norminette

re: fclean all
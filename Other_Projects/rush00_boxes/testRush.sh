#!/bin/sh
gcc -o test -Wall -Werror -Wextra ex00/ft_putchar.c ex00/main.c ex00/rush00.c  && ./test && rm ./test
echo '\n'
gcc -o test -Wall -Werror -Wextra ex00/ft_putchar.c ex00/main.c ex00/rush01.c  && ./test && rm ./test
echo '\n'
gcc -o test -Wall -Werror -Wextra ex00/ft_putchar.c ex00/main.c ex00/rush02.c  && ./test && rm ./test
echo '\n'
gcc -o test -Wall -Werror -Wextra ex00/ft_putchar.c ex00/main.c ex00/rush03.c  && ./test && rm ./test
echo '\n'
gcc -o test -Wall -Werror -Wextra ex00/ft_putchar.c ex00/main.c ex00/rush04.c  && ./test && rm ./test

norminette -R CheckForbiddenSourceHeader ./rush00/ex00/.

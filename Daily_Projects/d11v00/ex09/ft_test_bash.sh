gcc -o joetest -Wall -Werror -Wextra ./*.c

./joetest
rm joetest 
norminette -R CheckForbiddenSourceHeader
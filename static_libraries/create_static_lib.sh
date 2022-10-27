!#bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libmy.a *.o

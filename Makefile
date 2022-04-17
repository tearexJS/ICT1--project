CFLAGS=-std=c99 -Wall -Wextra -Werror
guessme: guessme.o
	gcc -o $@ $^
guessme.o: guessme.c
	gcc $(CFLAGS) -g -c $^ 
clean: 
	rm -rd *.o guessme
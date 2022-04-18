CFLAGS= -m32 -fno-stack-protector 
guessme: guessme.o
	gcc -o $@ -m32 $^ 
guessme.o: guessme.c
	gcc $(CFLAGS) -ggdb -c $^
clean: 
	rm -rd *.o guessme
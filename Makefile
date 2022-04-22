CFLAGS= -m32 -fno-stack-protector  -z execstack
guessme: guessme.o
	gcc -o $@ -m32 $^ -no-pie -static
guessme.o: guessme.c
	gcc $(CFLAGS) -ggdb -c $^
clean: 
	rm -rd *.o guessme
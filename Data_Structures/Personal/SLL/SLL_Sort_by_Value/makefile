SRC :=$(wildcard *.c)
OBJ :=$(patsubst %.c, %.o, $(SRC))

a.out : $(OBJ)
	gcc $(CFLAGS) -o $@ $^
clean :
	rm -f *.o *.out

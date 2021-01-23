COMPILER = g++
FLAGS = -D_DEBUG

all:
	$(COMPILER) $(FLAGS) main.cpp matrix.cpp

test: all
	./main.out

clean:
	rm *~ *.o

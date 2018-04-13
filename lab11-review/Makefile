CXX = g++
FLAGS = -pedantic -Wall --std=c++11 -g 

# -fsanitize=address

all: recursion
	./recursion

valgrind: recursion
	valgrind ./recursion

recursion: recursion.cpp
	${CXX} ${FLAGS} $^ -o $@

killv:
	killall -9 valgrind

clean:
	rm -vf recursion 

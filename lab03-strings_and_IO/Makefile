CXX = g++
FLAGS = -pedantic -Wall -Werror --std=c++11 -g

allllllll: cstring stream
	./stream 1 test0.txt

cstring: cstring.cpp
	${CXX} ${FLAGS} $^ -o $@

stream: streams.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf cstring stream

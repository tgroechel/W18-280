CXX = g++
FLAGS = -pedantic -Wall -Werror --std=c++11 -g

all: container
	./container

container: containers.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf container

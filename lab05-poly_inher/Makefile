CXX = g++
FLAGS = -pedantic -Wall -Werror --std=c++11 -g

all: inherpoly
	./inherpoly

inherpoly: iandp.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf inherpoly

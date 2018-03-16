CXX = g++
FLAGS = -pedantic -Wall --std=c++11 -g

all: dynamic
	./dynamic

dynamic: dynamic.cpp
	${CXX} ${FLAGS} $^ -o $@

exam_style: exam_style_dynamic.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf dynamic exam_style

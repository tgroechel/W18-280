CXX = g++
FLAGS = -pedantic -Wall --std=c++11 -g 

# -fsanitize=address

all: bigthree
	./bigthree

valgrind: bigthree
	valgrind ./bigthree

bigthree: bigthree.cpp
	${CXX} ${FLAGS} $^ -o $@

exam_style_list: exam_style_list.cpp
	${CXX} ${FLAGS} $^ -o $@
	./exam_style_list

killv:
	killall -9 valgrind

clean:
	rm -vf bigthree exam_style_list

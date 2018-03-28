CXX = g++
FLAGS = -pedantic -Wall --std=c++11 -g 

# -fsanitize=address

all: functors
	./functors

valgrind: functors
	valgrind ./functors

functors: functors.cpp
	${CXX} ${FLAGS} $^ -o $@

func_ptrs: func_ptrs.cpp
	${CXX} ${FLAGS} $^ -o $@

exam_style_list: exam_style_list.cpp
	${CXX} ${FLAGS} $^ -o $@
	./exam_style_list

killv:
	killall -9 valgrind

clean:
	rm -vf functors exam_style_list

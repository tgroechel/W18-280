CXX = g++
FLAGS = --std=c++11 -g

# -pedantic -Wall -Werror -Wfatal-errors

allllllll: cppclass gdbex
	./cppclass
	./gdbex

cppclass: cppclass.cpp
	${CXX} ${FLAGS} $^ -o $@

gdbex: gdb_stuff.cpp
	${CXX} ${FLAGS} $^ -o $@
	
clean:
	rm -rvf cppclass gdbex *dSYM

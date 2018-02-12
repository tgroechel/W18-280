CXX = g++
FLAGS = --std=c++11 -g

# -pedantic -Wall -Werror -Wfatal-errors

allllllll: cppclass gdbex

cppclass: cppclass.cpp
	${CXX} ${FLAGS} $^ -o $@

gdbex: gdb_stuff.cpp
	${CXX} ${FLAGS} $^ -o $@

spellcheck: spellcheck.cpp
	${CXX} ${FLAGS} $^ -o $@


val_gdbex: gdbex
	valgrind --leak-check=full --log-file="output" ./gdbex
	
clean:
	rm -rvf cppclass gdbex *dSYM

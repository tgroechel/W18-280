# comment

FLAGS= -Wall -pedantic -Werror --std=c++11 -g -Wfatal-errors

allll: streams cstring
	./streams
	./cstring 1 2 dsfjhdkjsf

streams: streams.cpp
	g++ ${FLAGS} $^ -o $@

cstring: cstring.cpp
	g++ $(FLAGS) $^ -o $@


clean:
	rm -vf cstring streams

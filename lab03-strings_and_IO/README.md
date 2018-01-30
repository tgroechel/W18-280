# Week 3 Agenda
![Image](.other/pictures/WhyUseCString.jpg)

## C-Strings vs C++ string
- char izard[1] = '\\0'
- const char * mander = "potato"
- string cheese = "hat"
- cheese[0] = 'c'
- cout
![Image](.other/pictures/cat.jpg)

## IO, argv, and arrrgc


## Makefile
Basics:
~~~make
target: dependencies
    command
~~~
Variables and comments:
~~~make
# This is a comment
FILES = file1.cpp file2.cpp
all:
    g++ $(FILES)
~~~
Useful symbols:
- `$^` == dependencies
- `$@` == use target name here
~~~make
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
~~~

## Worksheet
[Worksheet](https://docs.google.com/document/d/1Un3TljjRZQrG_389X3XDqxY3zRFUPcp1ZDgJuCRTCb0/edit#heading=h.nr154e7mxb4h)

## Lab Practice Questions
[Questions](https://docs.google.com/document/d/1ND69_kdcNXo-7HnASZqh7YzFt2YBxeXQX8JmfBR5b40/edit#heading=h.nr154e7mxb4h)

## Extra
- [Lab Survey](https://docs.google.com/forms/d/1Wku4LmK3ACVGLzZ0BGNL_q5RQmzxA1D1wGhGH0XKIKo/edit)

## Project 2 tips
- [Slides](https://docs.google.com/presentation/d/1Joy-2qyjFXUfAizmyzRVuhEjNFdTkWVM5LXDEywLYV8/edit#slide=id.g275ba625aa_0_47)
- Double check what height vs width are
- Initialize all the stuff
- 2-d array stored as 1-d array
- Due Oct. 6th

## Closing Time

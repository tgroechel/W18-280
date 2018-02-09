# Week 4 Agenda
![Image](.other/pictures/noclass.jpg)

## C-Style ADT
- struct
```cpp
Matrix m1;
Matrix_init(&m1, 3,4);
cout << *Matrix_at(&m1, 2, 2);
```

## C++ ADT
- class
```cpp
Person p1("Tom", 22);
cout << p1.get_age();
```

## Other
- why pass reference, const?
- initializer list
- scope resolution operator


# Worksheet
[Worksheet](https://drive.google.com/drive/u/1/folders/1lbEhJgcMx8nDvYPiQQu_u7MCcjy9R_ls)

## Debug


## Project 3
### Overview of how to approach
- [Slides](https://drive.google.com/drive/u/1/folders/1nZ6YBylNteusQhZVGZ6bW0mtEH8o_LKF)
- Learn Euchre, Get a deck of cards, [video](https://www.youtube.com/watch?v=M0jGJ0NRcrc)
- Card.cpp
- Test
- Pack.cpp
- Test
- Player->SimplePlayer.cpp,HumanPlayer.cpp
- Test
- main.cpp (make a Game class within this)
- Test

### Common pitfalls
- Don't forget to reset the pack after every hand whether shuffle or not!
- Right/Left Bower
- Design the gae class ahead of time
- The strategy of the SimplePlayer is trash
- Don't split everything in a partnership

## Practice Question


## gdb (leaving this here anyway)
- Compile with -g
- gdb ./program
- set args ARGUEMENTS
- run (r)
- start
- break FILE:LINE# (b)
- delete BREAKPOINT# (d)
- continue (c)
- next (n)
- step (s)
- backtrace (bt)
- info locals
- print VARIABLE
- watch VARIABLE
- help for the helps

## Closing Time

# Week 2 Agenda
![Image](../.other/pictures/pointers.png)

## Pointers
- What even is memory?
- &, \*
- \-,\+
- Why is this important???
- Please never just randomly use \*&\*&\*&\*&\*&\*&\*&\*&\*&\*&\*&\*&\*&\*&

## "Traversing by Pointer"
- What even is an array?
- How to loop?

~~~cpp
// Reverse give arr
// ie. {1,2,3} -> {3,2,1}
void reverse(int arr[], int size);

// Make numbers reflect their value in the array
// ie. {1,2,3} -> {1,2,2,3,3,3}
void numbers_reflect(int arr[], int out_arr[], int size);
~~~

## Worksheet
[Worksheet](https://docs.google.com/document/d/1L-UvGJGfIpWdMCe5qhSB46zo8iIlrWI67x9RAcjVARw/edit)

## Unit Testing
- 280's Framework

```cpp
#include "unit_test_framework.h"

TEST(whatever_test_name_is){
	bool potato = true;
	ASSERT_EQUAL(potato, true); // Must use one of the defined assert macros
}

TEST_MAIN(); // Macro that replaces your main, just put it in here
```

- This is not how testing works everywhere but is an example of how a company could
- DO NOT REPLACE ASSERTS IN IMPLEMENTATION FILES

## Extra
- [Lab Survey](https://docs.google.com/forms/d/1Wku4LmK3ACVGLzZ0BGNL_q5RQmzxA1D1wGhGH0XKIKo/edit)
- Very basic Makefile
- Basic gdb

## Project 2 tips
- Start early!
- What even is it?
- Please to all goodness look at your index variables
- This means double check what height vs width are
- Initialize all the stuff, you will know what this means
- 2-d array stored as 1-d array

## Closing Time

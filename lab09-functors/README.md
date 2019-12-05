# Week 9 Agenda
![Image](../.other/pictures/opera.gif)

## Function Pointers
- Just be comfortable using one

```cpp
double add(int * a, int b) {
    return *a + b;
}

double sub(int * a, int b) {
    return *a - b;
}

int main() {
    double (*varname)(int *, int); // declaration
    int a = 2, b = 3;

    varname = &add; // assginment
    cout << varname(&a, b) << endl; // how to use, 5

    varname = &sub; // can reassign to same type of signature
    cout << varname(&a, b) << endl; // -1
}
```

## Functors
- Class with overloaded (), that is it.
- Good for more abstraction = more generalization
- "Easy Points" on exam as most of it is syntax (like Big Three)

## Iterators and Friends
```cpp
class A{
	int a_mine;
	class B{
		int b_mine;
		friend class A;
	};
};
```

- Who can access who?
- Why was this important in project 4?
- Iterator variable for list:

```cpp
template <typename T>
bool List<T>::func_empty_w_it(const List<T>& list_in) const{
	typename List<T>::Iterator it = list_in.begin();
	return it == list_in.end();
}
```

## Worksheet
[Worksheet](https://drive.google.com/drive/u/1/folders/1vKztTqW_mbVeLUeZII0Az5vH5e2egekB)

## Exam Style Question
[Exam Style Functor](https://docs.google.com/document/d/1coUy-MmdsOYi_hk1Je8Yl9Y2N7kVs5Jbk4NCwGhbwOo/edit)

## Work on lab

## Project 5 Overview
- slides, what are those?
- [Slides](https://drive.google.com/drive/u/1/folders/1nZ6YBylNteusQhZVGZ6bW0mtEH8o_LKF)


## Closing Time

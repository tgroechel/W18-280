#include <iostream>
using namespace std;

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

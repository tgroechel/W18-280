#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x = 0;
    int *pointer = &x;
    int **ptr2 = &pointer;
    cout << x << endl;
    cout << 0 << endl;
    cout << *pointer << endl;
    cout << **ptr2 << endl;
    cout << **(&*&*&*&*ptr2) << endl;

    x = 4;
    *pointer = 7;

    int y = 8;
    int &yref = y;
    yref = 9;

    int *ptry = &y;
    *pointer = *ptry;

    const int num_tom = 47;
    const int jack = 5;

    const int *pointer_tom = &num_tom;
    pointer_tom = &jack;
    pointer_tom = &x;

    int arr[5] = {1, 2, 3, 7, 9};
    // by index
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // by pointer
    for (const int *ptr = arr; ptr < arr + 5; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    int *ptr3 = arr + 7;
    cout << arr - arr << endl;

    return 0;
}

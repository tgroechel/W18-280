#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {
private:

    int size;
    int * arr;

    void copy_rhs(const A & right_hand_side) {
        size = right_hand_side.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = right_hand_side.arr[i];
        }
    }

public:

    static int potato;

    A() : size(3), arr(new int[size]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = i;
        }
    }

    A(const A & right_hand_side) {
        copy_rhs(right_hand_side);
    }

    A & operator=(const A & right_hand_side) {
        if (&right_hand_side == this) {
            return *this;
        }

        delete[] arr;
        copy_rhs(right_hand_side);
        return *this;
    }

    ~A() {
        delete[] arr;
    }

};
int A::potato = 0;



int main(int argc, char ** argv) {
    A a1; // a1 = {size = 3, int * arr = 0x10}
    A a2(a1); // a2 = {size =3, int * arr = 0x40} ->

    a1 = a2; // a1 = {size = 3, int * arr = 0x30} -> 0x30:[0,1,2]
    a2 = a2; // a2 = {size = 3, int * arr = 0x60} -> 0x60:[ , , ]

    cout << a1.potato << endl; // 0
    a1.potato++;
    a2.potato++;
    cout << a1.potato << endl; // 2
    cout << a2.potato << endl; // 2

    auto i = 9;

    cout << i << endl;

    std::vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << endl;
    }
    for (auto it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << endl;
    }

    for (auto & it : v1) {
        cout << it << endl;
        it = 9;
    }
    for (const auto & it : v1) {
        cout << it << endl;
    }
    // a1.i++;
    // a2.i++;
    // cout << a1.i << endl;


    return 0;
}
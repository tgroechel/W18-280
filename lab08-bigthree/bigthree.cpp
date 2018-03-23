#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A {

    int * arr;

public:
    static int count_of_objects;
    A() : arr(new int[2]) {
        arr[0] = 3;
        arr[1] = 8;
        ++count_of_objects;
    }

    A(const A& other) {
        arr = new int[2];
        arr[0] = other.arr[0];
        arr[1] = other.arr[1];
    }

    A& operator=(const A& right_hand_side) {
        if (this != &right_hand_side) {
            delete[] arr;
            arr = new int[2];
            arr[0] = right_hand_side.arr[0];
            arr[1] = right_hand_side.arr[1];
        }
        return *this;
    }

    ~A() {
        delete[] arr;
    }

};
int A::count_of_objects = 0;

int main(int argc, char **argv) {
    A a1;
    A a2;

    A a3(a2);

    a3 = a2;
    a3 = a3 = a3;
    // cout << a2.count_of_objects << endl;
    // cout << a1.count_of_objects << endl;

    // auto num2 = 3.4;
    // cout << num2 << endl;

    // vector<int> dogs = {1, 2, 4};

    // for (auto & it : dogs) {
    //     cout << it << endl;
    //     it = 6;
    // }
    // for (const int& it : dogs) {
    //     cout << it << endl;
    // }
    return 0;
}
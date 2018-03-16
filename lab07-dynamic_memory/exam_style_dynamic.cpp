#include <iostream>
using namespace std;

int where = 4;
int * am = new int(5);

class LeakMem {
    int * first;
    int second;
    int * arr = new int[where];
    int * arr2 = arr;
public:
    LeakMem(int first_in) : first{new int(first_in)} {
        cout << "LeakMem Norm Ctor Called" << endl;
        second = 5;
        for (int i = 0; i < 4; i++) {
            arr[i] = i;
        }
    }

    void start_me() {
        cout << second << endl;
        cout << *am << endl;
        delete am;
    }

    void run_me() {
        cout << where << endl;
        delete first;
        cout << first << endl;
    }
};


int main(int argc, char * argv[]) {
    LeakMem lm(5);
    lm.start_me();
    lm.run_me();
    lm.start_me();
    return 0;
}

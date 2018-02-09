#include <iostream>
#include <string>

using namespace std;

class Can {
    bool can_works;
public:
    Can() : can_works(false) {}
    Can(bool _can_works) : can_works(_can_works) {}
    Can(int _a1, int _a2); // stub

    void set_can_works(bool _can_works) {
        can_works = _can_works;
    }
    bool get_can_works() const {
        return can_works;
    }

    void print_boring_function_because_my_lab_is_boring() {
        cout << "I'm having fun" << endl;
    }
};

Can::Can(int _a1, int _a2) {
    if (_a1 > _a2)
        can_works = true;
    else
        can_works = false;
}

int main(int argc, char ** argv) {
    Can c1;

    cout << c1.get_can_works() << endl;

    return 0;
}
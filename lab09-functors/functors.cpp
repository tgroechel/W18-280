#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class A {
    string trojans;

  public:
    A(string s_in) : trojans(s_in) {}
    bool operator()(string something) const { return trojans == something; }
};

class Bee {
    int trojans;

  public:
    Bee(int s_in) : trojans(s_in) {}
    bool operator()(int something) const { return trojans < something; }
};

template <typename Potato, typename Tomato>
void print_on_same(Potato p1, Tomato t1) {
    cout << p1(t1) << endl;
}

int main() {
    A aye("pigs");
    A aye2("doglets");

    cout << aye("doglets") << endl;  // 0
    cout << aye2("doglets") << endl; // 1
    cout << aye("pigs") << endl;     // 1

    Bee b1(7);
    print_on_same(aye, "pigs"); // 1
    print_on_same(b1, 9);       // 1

    return 0;
}

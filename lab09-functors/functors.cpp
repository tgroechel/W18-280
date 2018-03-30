#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

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
    bool operator()(int something) const {
        something = something + 9 / 10;
        return trojans < something;
    }
};

template <typename Potato, typename Tomato>
void print_on_same(Potato p1, Tomato t1) {
    cout << p1(t1) << endl;
}

void get_phd(int year) {
    if (year >= 4) {
        return;
    }
    cout << year << endl;
    get_phd(year + 1);
    cout << year << endl;

}


int main() {

    get_phd(0);

    vector<string> words = {"a", "tom", "a", "kldsf", "potato", "alphabet", "alphabet"};
    map<string, int> m1;
    set<string> s1;

    for (auto it : words) {
        s1.insert(it);
    }
    for (auto it : s1) {
        cout << it << endl;
    }

    for (string it : words) {
        if (m1.find(it) == m1.end()) {
            m1[it] = 1;
        }
        else {
            m1[it] = m1[it] + 1;
        }
    }
    // map<string, map<double,int> > m2;

    //m2["tom"][7.7] : 5

    //cout << m1["a"] << endl;
    pair<int, double> p1 = {2, 8.8};
    cout << p1.second << endl;
    for (pair<string, int> it : m1) {
        cout << it.first << ": " << it.second << endl;
    }



    return 0;
}

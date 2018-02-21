#include <iostream>
#include <string>

using namespace std;

class Teacher {
    string name;
    int t_hours;
public:
    Teacher() : name("default"), t_hours(0) {
        cout << "Teacher Default Constructor" << endl;
    }

    Teacher(string _name, int _t_hours) : name(_name), t_hours(_t_hours) {
        cout << "Teacher Overloaded Constructor" << endl;
    }

    virtual void change_name(string _name) {
        name = _name;
        cout << "Teacher name is now: " << name << endl;
    }

    void increment_hours() {
        ++t_hours;
        cout << "Teacher hours: " << t_hours << endl;
    }

    virtual void teach() = 0;

};

class GSI : public Teacher {

    int num_years_here;
public:
    GSI() : num_years_here(76) {
        cout << "Default ctor GSI" << endl;
    }
    GSI(string _name, int _t_hours, int _num_years_here) : Teacher(_name, _t_hours), num_years_here(_num_years_here) {
        cout << "Overloaded ctor GSI" << endl;
    }

    void teach() override {
        cout << "Teach GSI" << endl;
    }

    void increment_hours() { // hiding
        cout << "incrememnt for GSI" << endl;
    }

    void change_name(string _name) override {
        cout << "_name is not changed in GSI" << endl;
    }

};

class IA : public Teacher {

public:
    IA() {
        cout << "Default ctor GSI" << endl;
    }

    void teach() override {
        cout << "Teach IA" << endl;
    }

    void change_name(string _name) override {
        cout << "_name is not changed in IA" << endl;
    }
};

class Atulya : public GSI {
public:
    Atulya() {
        cout << "Atulya default ctor" << endl;
    }
};

// Overloading
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}


int operator+(const GSI& g1, const GSI& g2) {
    return g1.num_years_here + g2.num_years_here;
}


int main(int argc, char ** argv) {
    GSI g1;
    g1.increment_hours();


    // GSI * ptr1 = &g1;
    // ptr1->increment_hours();

    // Teacher * ptr2 = &g1;
    // ptr2->increment_hours();

    // cout << endl;

    // t1->Teacher::change_name("are you sure?");

    return 0;
}

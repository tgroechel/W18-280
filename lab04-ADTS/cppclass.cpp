#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sandwich {
  private:
    string bread;
    int slices_of_tomato;

  public:
    Sandwich() : bread("Default"), slices_of_tomato(0) {}

    Sandwich(string b_in) {
        bread = b_in;
        slices_of_tomato = 9;
    }

    string get_bread() const { return bread; }
    void set_bread(const string);
};

void Sandwich::set_bread(const string b_in) { bread = b_in; }

int main(int argc, char **argv) {
    Sandwich s1;
    Sandwich s2("wheat");

    cout << s2.get_bread() << endl;

    return 0;
}

int add(const vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
    }
    return 2;
}
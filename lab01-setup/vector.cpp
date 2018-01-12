#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hello 280" << endl;

    double one = 1.0;
    double two = 2.0;
    double three = two + one;

    double epsilon = 0.00001;
    assert(abs(three - 3.0) < epsilon);

    vector<double> v1 = {2, 4, 5, 8};
    v1.push_back(4);
    for (unsigned int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << endl;
    }

    vector<vector<double>> veetwo = {{1, 2}, {3, 4, 6, 8, -9, 7}};

    for (unsigned int i = 0; i < veetwo.size(); ++i) {
        for (unsigned int j = 0; j < veetwo.at(i).size(); ++j) {
            cout << veetwo[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

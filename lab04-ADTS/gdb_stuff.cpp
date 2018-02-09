#include <iostream>
#include <string>
#include <vector>

using namespace std;


int sum(vector<int>& nums) {
    int sum;
    for (int i = 0; i < 5; ++i) {
        sum += nums[i];
        nums[i] = i;
    }
    return sum;
}

void purpose_segfault(vector<int>& nums) {
    int * ptr = nullptr;
    cout << *ptr << endl;
}

int main(int argc, char ** argv) {
    vector<int> v = {4, 5, 8};
    cout << sum(v) << endl;
    purpose_segfault(v);
    return 0;
}

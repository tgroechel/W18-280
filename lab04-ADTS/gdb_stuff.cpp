#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_ptr(int *ptr) {
    if (ptr != nullptr)
        return false;
    return true;
}

int sum(vector<int> &nums) {
    int sum_up;
    for (int i = 0; i < 10000; ++i) {
        if (i == 700)
            cout << "ksjhf" << endl;
        sum_up += nums[i];
        nums[i] = i;
    }
    return sum_up;
}

void purpose_segfault(vector<int> &nums) {
    int *ptr = nullptr;
    if (check_ptr(ptr))
        cout << "woop" << endl;
}

int main(int argc, char **argv) {
    vector<int> v = {4, 5, 8};
    cout << sum(v) << endl;
    purpose_segfault(v);
    return 0;
}

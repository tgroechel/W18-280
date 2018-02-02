#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int arggc, char **argv) {
    for (int i = 0; i < arggc; ++i) {
        cout << argv[i] << endl;
    }

    char izard[7] = {'L', '\0', 'c', 'a', 't', '\0', 'd'};
    cout << izard << endl;        // L
    cout << izard + 1 << endl;    //
    cout << izard + 3 << endl;    // at
    cout << izard + 6 << endl;    // Undefined
    cout << *izard << endl;       // L
    cout << *(izard + 6) << endl; // d
    cout << izard[6] << endl;     // d

    // const char *ptr = "cat"; // {'c', 'a', 't', '\0'}
    // char potato[4] = "cat"; // TODO come back here

    char *ptr_izard = izard;
    while (*ptr_izard) {
        cout << *ptr_izard;
        ++ptr_izard;
    }
    cout << endl;
    char mander[7] = {'L', '\0', 'd', 'a', 't', '\0', 'd'};

    cout << strcmp(izard, izard) << endl;  // 0
    cout << strcmp(izard, mander) << endl; // 0
    cout << strncmp(izard, mander, 4);     // not 0

    char potato2 = 48;
    int zero = '0';
    cout << potato2 << endl;
    cout << zero << endl;

    return 0;
}

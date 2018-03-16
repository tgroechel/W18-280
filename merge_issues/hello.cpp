#include <iostream>

using namespace std;

int add(int a, int b){
	cout << a << endl;
	cout << b << endl;
	return a + b;
}

int sub(int a, int b){
	return a - b;
}


int main(){
	cout << add(2,2) << endl;
	cout << sub(2,2) << endl;
	cout << "This is done  " << endl;
	cout << "And over" << endl;
}

#include <iostream>

using namespace std;

int add(int a, int b){
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	return a + b;
}

int sub(int a, int b){
	return b - a;
}


int main(){
	cout << add(2,2) << endl;
	cout << sub(2,2) << endl;
	
	cout << "This is done" << endl;
}

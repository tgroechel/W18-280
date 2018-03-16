#include <iostream>
#include <string>

using namespace std;


template <typename potato>
potato print_arr(potato a, int size){
	for(int i = 0; i < size; ++i){
		cout << a[i] << ",";
	}
	cout << endl;

	return a;
}


int main(int argc, char ** argv) {
	double * arraaaaaaaaaay = new double[3];
	double * happy = arraaaaaaaaaay;

	
	//arraaaaaaaaaay[2] = 7;
	print_arr(arraaaaaaaaaay, 3);
	cout << happy << endl;

	delete[] arraaaaaaaaaay;
	arraaaaaaaaaay = nullptr;

	double * sad = new double[3];
	print_arr(sad, 3);
	print_arr(happy,3);


    return 0;
}
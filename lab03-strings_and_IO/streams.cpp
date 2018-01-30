#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void read_stuff(istream& is){
	string junk;
	is >> junk;
	int num1, num2, num3;
	is >> num1 >> num2 >> num3;
	cout << num1 + num2 + num3 << endl;

	string holder;
	while(is >> holder){
		cout << holder << endl;
	}
}

int main(int arrrgc, char ** argv){
	for(int i = 0; i < arrrgc; ++i){
		cout << argv[i] << endl;
	}
	int num = atoi(argv[1]);
	cout << num << endl;

	ifstream fin;
	fin.open(argv[2]);
	read_stuff(fin);

	stringstream ss;
	ss << "kdkjfsldjfklsd";

	ss << "lolololol\n" << endl;

	ss << "   kjsdkjfsllkslkjf";

	//cout << ss << flush;
	string junk2;
	ss >> junk2;
	cout << junk2 << endl << endl;
	cout << ss.str() << endl;
	
	

	return 0;
}

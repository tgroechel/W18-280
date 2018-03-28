#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


class Is_A_Potato{
	string s;
public:
	Is_A_Potato(string s_in) : s(s_in) {}
	bool operator()(string comp_to){
		return s == comp_to;
	}

};

int main() {

	Is_A_Potato my_potato("potato");

	std::vector<string> v(4, "potato");
	v[2] = "notapotato";

	for(auto it = v.begin(); it != v.end(); ++it){
		if(!my_potato(*it)){
			cout << *it << endl;
		}
	}

	cout << endl;
	for(auto it : v){
		cout << it << endl;
	}

	map<string, int> m1;
	m1["la"] = 7;

	for(const pair<string,int>& it2 : m1){
		cout << it2.first << endl;
	}


}

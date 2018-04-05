#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int print_stuff(int num){
	cout << num << endl;
	if(num <= 0){
		return 1;
	}
	int hold = print_stuff(num - 1);
	cout << hold << endl;
	return hold + 1;
}

struct fs_direntry {
    char name[59 + 1];         // name of this file or directory
    uint32_t inode_block;                  // disk block that stores the inode for
                                           // this file or directory
};

int main() {
	for(int i = 0; i < 59; ++i){
		cout << 'a';
	}
	cout << endl;

	cout << (512/sizeof(fs_direntry)) << endl;

}

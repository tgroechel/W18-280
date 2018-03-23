#include <iostream>
#include <string>
#include <cassert>

using namespace std;



struct Node {
    int datum;
    Node * next;
};

Node * reverse_list(Node * head); // implement
bool is_circular(Node * head); // implement

// Help for debugging///////////
// DOES NOT WORK ON CIRCLES RN//
void print_list(Node * head) {
    while (head) {
        cout << head->datum << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
////////////////////////////////



Node * reverse_list(Node * head) {
    // IMPLEMENT ME
    return nullptr;
}

bool is_circular(Node * head) {
    // IMPLEMENT ME
    return true;
}



int main(int argc, char ** argv) {
	// These are all prebuilt lists
    Node * empty = nullptr;

    Node * head_1 = new Node{1, nullptr};

    Node * temp_2_2 = new Node{2, nullptr};
    Node * head_2 = new Node{1, temp_2_2};

    Node * temp_3_3 = new Node{3, nullptr};
    Node * temp_3_2 = new Node{2, temp_3_3};
    Node * head_3 = new Node{1, temp_3_2};


    Node * circ_head_1 = new Node{1, nullptr};
    circ_head_1->next = circ_head_1;

    Node * temp_c2_2 = new Node{2, nullptr};
    Node * circ_head_2 = new Node{1, temp_c2_2};
    temp_c2_2->next = circ_head_2;

    // Print out all of the lists to see them
    print_list(empty);
    print_list(head_1);
    print_list(head_2);
    print_list(head_3);

    // Test is reverse_list
    

    // Test is circular
    cout << endl;
    cout << "Start circular tests" << endl;
    assert(!is_circular(empty));
    assert(!is_circular(head_1));
    assert(!is_circular(head_2));
    assert(!is_circular(head_3));
    assert(is_circular(circ_head_1));
    assert(is_circular(circ_head_2));
    cout << "PASSED is_circular TESTS" << endl << endl;




    return 0;
}
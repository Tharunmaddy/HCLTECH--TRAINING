#include <iostream>
#include <string>
using namespace std;

class Block {
public:
    string data;
    string hash;
    string previousHash;
    Block* next;

    Block(string d, string prevHash) {
        data = d;
        previousHash = prevHash;
        hash = generateHash();
        next = NULL;
    }

    string generateHash() {
        return to_string(data.length()) + previousHash;
    }
};

int main() {

    
    Block* block1 = new Block("Transaction A", "0");


    Block* block2 = new Block("Transaction B", block1->hash);
    block1->next = block2;

    
    Block* block3 = new Block("Transaction C", block2->hash);
    block2->next = block3;

    
    Block* temp = block1;

    while(temp != NULL) {
        cout << "Data: " << temp->data << endl;
        cout << "Hash: " << temp->hash << endl;
        cout << "Previous Hash: " << temp->previousHash << endl;
        cout << "----------------------" << endl;

        temp = temp->next;
    }

    return 0;
}
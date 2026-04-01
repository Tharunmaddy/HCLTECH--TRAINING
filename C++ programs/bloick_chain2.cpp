#include <iostream>
#include <string>
using namespace std;

struct Block {
    string data;
    string hash;
    string previousHash;
    Block* next;
};

string generateHash(string data, string prevHash) {
    return to_string(data.length()) + prevHash;
}

int main() {

    Block* block1 = new Block();
    block1->data = "Transaction A";
    block1->previousHash = "0";
    block1->hash = generateHash(block1->data, block1->previousHash);

    Block* block2 = new Block();
    block2->data = "Transaction B";
    block2->previousHash = block1->hash;
    block2->hash = generateHash(block2->data, block2->previousHash);

    block1->next = block2;
    block2->next = NULL;

    Block* temp = block1;
    while(temp != NULL) {
        cout << "Data: " << temp->data << endl;
        cout << "Hash: " << temp->hash << endl;
        cout << "Previous Hash: " << temp->previousHash << endl;
        cout << "-------------------" << endl;
        temp = temp->next;
    }

    return 0;
}
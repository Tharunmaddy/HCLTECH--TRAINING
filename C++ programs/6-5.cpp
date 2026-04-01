#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor" << endl; }
    ~Test() { cout << "Destructor" << endl; }
};

int main() {
    Test* t = new Test();
    delete t;
    return 0;
}
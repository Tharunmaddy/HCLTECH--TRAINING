#include <iostream>
using namespace std;

int main() {
    int addr = 12345;
    int* ptr = reinterpret_cast<int*>(addr);
    cout << ptr << endl;
    return 0;
}
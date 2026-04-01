#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;
    int** ptr2 = &ptr;
    **ptr2 = 20;
    cout << var << endl;
    return 0;
}
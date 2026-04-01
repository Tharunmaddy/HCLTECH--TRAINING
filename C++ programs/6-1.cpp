#include <iostream>
using namespace std;

int main() {
    const char* arr[] = {"hello", "world"};
    for (size_t i = 0; i < 2; ++i) {
        cout << *(arr + i) << endl;
    }
    return 0;
}
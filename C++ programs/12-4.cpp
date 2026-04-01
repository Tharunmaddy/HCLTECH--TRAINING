#include <iostream>
using namespace std;

char toUpper(char c) {
    return c & ~32;
}

int main() {
    char c = 'a';
    cout << toUpper(c) << endl;
    return 0;
}
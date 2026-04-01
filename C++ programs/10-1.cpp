#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = RED;
    int i = static_cast<int>(c);
    cout << i << endl;
    return 0;
}
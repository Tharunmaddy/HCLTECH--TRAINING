#include <iostream>
using namespace std;

namespace MathOps {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
}

int main() {
    cout << MathOps::add(1, 2) << endl;
    cout << MathOps::subtract(5, 3) << endl;
    return 0;
}
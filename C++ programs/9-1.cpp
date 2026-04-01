#include <iostream>
using namespace std;

#define SQR(x) ((x) * (x))

inline int sqr(int x) { return x * x; }

int main() {
    int a = 2, b = 3;
    cout << SQR(a + b) << endl;
    cout << sqr(a + b) << endl;
    return 0;
}
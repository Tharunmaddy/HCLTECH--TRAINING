#include <iostream>
using namespace std;

template<class T>
concept Arithmetic = requires(T a, T b) {
    a + b;
    a * b;
};

template<Arithmetic T>
class Matrix {
    // same
};

int main() {
    Matrix<int> m;
    // Matrix<string> fails
    return 0;
}
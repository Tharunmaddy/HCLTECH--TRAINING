#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        std::ifstream file("nonexistent.txt");
        if (!file) throw std::runtime_error("File error");
        int a, b;
        cin >> a >> b;
        if (b == 0) throw std::runtime_error("Division by zero");
        cout << a / b << endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
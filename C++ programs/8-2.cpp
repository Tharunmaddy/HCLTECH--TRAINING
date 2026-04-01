#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int n;
        cin >> n;
        if (n < 0) throw std::runtime_error("Negative number");
        cout << "Positive" << endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
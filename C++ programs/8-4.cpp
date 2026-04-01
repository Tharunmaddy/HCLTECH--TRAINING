#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    string s;
    cin >> s;
    try {
        size_t pos;
        int num = std::stoi(s, &pos);
        if (pos != s.size()) throw std::invalid_argument("Not numeric");
        cout << num << endl;
    } catch (const std::invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}
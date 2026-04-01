#include <iostream>
#include <string>
using namespace std;

template<class T>
string to_string(T val) {
    return std::to_string(val);
}

template<>
string to_string(string val) {
    return "\"" + val + "\"";
}

int main() {
    cout << to_string(123) << endl;
    cout << to_string(1.23) << endl;
    cout << to_string("hello") << endl;
    return 0;
}
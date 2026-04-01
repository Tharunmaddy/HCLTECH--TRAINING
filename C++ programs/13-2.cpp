#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool matchApple(const string& s) {
    std::regex r("apple", std::regex_constants::icase);
    return std::regex_match(s, r);
}

int main() {
    cout << matchApple("Apple") << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool isDigits(const string& s) {
    std::regex r("\\d+");
    return std::regex_match(s, r);
}

int main() {
    cout << isDigits("123") << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool isIPv4(const string& s) {
    std::regex r("(\\d{1,3}\\.){3}\\d{1,3}");
    return std::regex_match(s, r);
}

int main() {
    cout << isIPv4("192.168.1.1") << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <regex>
using namespace std;

string formatPhone(const string& s) {
    std::regex r("(\\d{3})(\\d{3})(\\d{4})");
    return std::regex_replace(s, r, "($1) $2-$3");
}

int main() {
    cout << formatPhone("1234567890") << endl;
    return 0;
}
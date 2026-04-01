#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool isURL(const string& s) {
    std::regex r("https?://[\\w\\.]+");
    return std::regex_match(s, r);
}

int main() {
    cout << isURL("http://example.com") << endl;
    return 0;
}
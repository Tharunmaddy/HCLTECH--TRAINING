#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool hasRepeatedWords(const string& s) {
    std::regex r("\\b(\\w+)\\s+\\1\\b");
    return std::regex_search(s, r);
}

int main() {
    cout << hasRepeatedWords("the the") << endl;
    return 0;
}
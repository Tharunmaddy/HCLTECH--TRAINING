#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

vector<string> extractHashtags(const string& s) {
    std::regex r("#\\w+");
    vector<string> res;
    for (std::sregex_iterator i = std::sregex_iterator(s.begin(), s.end(), r); i != std::sregex_iterator(); ++i) {
        res.push_back(i->str());
    }
    return res;
}

int main() {
    auto h = extractHashtags("Hello #world #test");
    for (auto& s : h) cout << s << endl;
    return 0;
}
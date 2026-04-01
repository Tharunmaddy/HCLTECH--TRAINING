#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    try {
        std::ifstream file("file.txt");
        if (!file.is_open()) throw string("Cannot open file");
    } catch (const string& e) {
        cout << e << endl;
    }
    return 0;
}
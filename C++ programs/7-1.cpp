#include <iostream>
#include <fstream>
using namespace std;

int main() {
    std::ofstream file("test.txt");
    if (file.is_open()) {
        file << "data";
        file.close();
    }
    std::ifstream in("test.txt");
    string content;
    std::getline(in, content);
    cout << content << endl;
    in.close();
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    std::ifstream file("input.txt");
    int lines = 0;
    string line;
    while (std::getline(file, line)) ++lines;
    file.close();
    std::ofstream out("input.txt", std::ios::app);
    out << "Total Lines: " << lines << endl;
    out.close();
    return 0;
}
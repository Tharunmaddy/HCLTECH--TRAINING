#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int roll;
};

int main() {
    vector<Student> students = {{"A", 1}, {"B", 2}};
    std::ofstream out("students.txt");
    for (auto& s : students) {
        out << s.name << " " << s.roll << endl;
    }
    out.close();
    std::ifstream in("students.txt");
    Student s;
    while (in >> s.name >> s.roll) {
        cout << s.name << " " << s.roll << endl;
    }
    in.close();
    return 0;
}
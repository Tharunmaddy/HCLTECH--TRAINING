#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee {
    int id;
    char name[50];
    double salary;
};

int main() {
    Employee e = {1, "John", 50000};
    std::ofstream out("emp.bin", std::ios::binary);
    out.write((char*)&e, sizeof(e));
    out.close();
    std::ifstream in("emp.bin", std::ios::binary);
    Employee e2;
    in.read((char*)&e2, sizeof(e2));
    cout << e2.id << " " << e2.name << " " << e2.salary << endl;
    in.close();
    return 0;
}
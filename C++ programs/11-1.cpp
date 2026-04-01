#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string city;
};

struct Employee {
    string name;
    Address addr;
};

int main() {
    Employee e = {"John", {"Main St", "NY"}};
    cout << e.name << " " << e.addr.street << endl;
    return 0;
}
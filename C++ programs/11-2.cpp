#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s = {"John", 20};
    Student* ptr = &s;
    cout << ptr->name << " " << ptr->age << endl;
    return 0;
}
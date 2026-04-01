#include <iostream>
using namespace std;

class MyException {};

int main() {
    try {
        double salary;
        cin >> salary;
        if (salary < 0) throw MyException();
        cout << "OK" << endl;
    } catch (MyException) {
        cout << "Negative salary" << endl;
    }
    return 0;
}
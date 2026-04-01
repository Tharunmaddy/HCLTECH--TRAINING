#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) { return a / b; }

int main() {
    double (*ops[])(double, double) = {add, sub, mul, div};
    int choice;
    double a, b;
    cout << "Enter choice (1-4), a, b: ";
    cin >> choice >> a >> b;
    if (choice >= 1 && choice <= 4) {
        cout << ops[choice - 1](a, b) << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printDiag(int x) {
    cout << x << endl;
}

void printDiag(double x) {
    cout << x << endl;
}

void printDiag(const string& x) {
    cout << x << endl;
}

void printDiag(const vector<int>& x) {
    for (int i : x) cout << i << " ";
    cout << endl;
}

int main() {
    printDiag(5);
    printDiag(3.14);
    printDiag("hello");
    printDiag(vector<int>{1, 2, 3});
    return 0;
}
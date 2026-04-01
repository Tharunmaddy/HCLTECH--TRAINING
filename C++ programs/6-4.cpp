#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    Student* arr = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].name >> arr[i].age;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i].name << " " << arr[i].age << endl;
    }
    delete[] arr;
    return 0;
}
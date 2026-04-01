#include <iostream>
#include <stdexcept>
using namespace std;

struct Date {
    int day, month, year;
};

Date getDate() {
    int d, m, y;
    cin >> d >> m >> y;
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 0) throw std::invalid_argument("Invalid");
    return {d, m, y};
}

int main() {
    try {
        Date d = getDate();
        cout << d.day << "/" << d.month << "/" << d.year << endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
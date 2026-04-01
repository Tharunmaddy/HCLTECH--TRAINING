#include <iostream>
using namespace std;

struct Meters {
    double value;
};

struct Seconds {
    double value;
};

struct MetersPerSecond {
    double value;
};

MetersPerSecond operator/(Meters m, Seconds s) {
    return {m.value / s.value};
}

int main() {
    Meters m{100};
    Seconds s{10};
    MetersPerSecond v = m / s;
    cout << v.value << endl;
    return 0;
}
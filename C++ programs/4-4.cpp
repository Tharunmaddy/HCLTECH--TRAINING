#include <iostream>
using namespace std;

class Counter {
    int count = 0;
public:
    Counter& operator++() {
        ++count;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }
    int get() const {
        return count;
    }
};

int main() {
    Counter c;
    int x = (c++).get();
    int y = (++c).get();
    cout << x << " " << y << endl;
    return 0;
}
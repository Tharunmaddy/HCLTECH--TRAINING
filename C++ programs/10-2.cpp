#include <iostream>
using namespace std;

class Test {
    const int val = 10;
public:
    void setValue() {
        const_cast<int&>(val) = 20;
    }
    int get() const { return val; }
};

int main() {
    Test t;
    t.setValue();
    cout << t.get() << endl;
    return 0;
}
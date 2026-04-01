#include <iostream>
using namespace std;

template<class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() { return value; }
};

template<class T>
class Box<T*> {
    T* value;
public:
    Box(T* v) : value(v) {}
    T* get() { return value; }
    void reset() { value = nullptr; }
};

int main() {
    Box<int> b1(10);
    cout << b1.get() << endl;
    int x = 20;
    Box<int*> b2(&x);
    cout << *b2.get() << endl;
    b2.reset();
    return 0;
}
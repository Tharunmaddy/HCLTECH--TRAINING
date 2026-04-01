#include <iostream>
using namespace std;

class Obj {
    int id;
public:
    Obj(int i) : id(i) { cout << "Construct " << id << endl; }
    ~Obj() { cout << "Destruct " << id << endl; }
};

int main() {
    try {
        Obj o1(1);
        {
            Obj o2(2);
            throw std::runtime_error("Error");
            Obj o3(3);
        }
        Obj o4(4);
    } catch (...) {
        cout << "Caught" << endl;
    }
    return 0;
}
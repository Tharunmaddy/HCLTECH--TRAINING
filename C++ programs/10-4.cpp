#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {}
};

class Circle : public Shape {};

int main() {
    Shape* s = new Circle();
    Circle* c = dynamic_cast<Circle*>(s);
    if (c) cout << "Success" << endl;
    delete s;
    return 0;
}
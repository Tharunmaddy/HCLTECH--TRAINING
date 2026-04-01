#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
    double width = 0, height = 0;
public:
    void setWidth(double w) {
        if (w <= 0) throw std::invalid_argument("Invalid width");
        width = w;
    }
    void setHeight(double h) {
        if (h <= 0) throw std::invalid_argument("Invalid height");
        height = h;
    }
    double getArea() const {
        return width * height;
    }
};

int main() {
    Rectangle r;
    try {
        r.setWidth(-1);
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
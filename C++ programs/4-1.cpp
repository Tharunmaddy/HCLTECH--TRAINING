#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double distance(Point p1, Point p2) {
    return distance(p1.x, p1.y, p2.x, p2.y);
}

double distance(Point p) {
    return distance(p, Point{0, 0});
}

int main() {
    Point p1{1, 2}, p2{3, 4};
    cout << distance(1, 2, 3, 4) << endl;
    cout << distance(p1, p2) << endl;
    cout << distance(p1) << endl;
    return 0;
}
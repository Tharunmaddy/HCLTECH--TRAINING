#include <iostream>
using namespace std;

template<class T>
struct Vector2 {
    T x, y;
    Vector2 operator+(const Vector2& other) {
        return {x + other.x, y + other.y};
    }
    Vector2 operator-(const Vector2& other) {
        return {x - other.x, y - other.y};
    }
    Vector2 operator*(T scalar) {
        return {x * scalar, y * scalar};
    }
};

template<>
struct Vector2<string> {}; // prevent

int main() {
    Vector2<float> v1 = {1, 2}, v2 = {3, 4};
    auto v3 = v1 + v2;
    cout << v3.x << " " << v3.y << endl;
    return 0;
}
#include <iostream>
using namespace std;

namespace MathOps {
    int pow(int base, int exp) {
        int res = 1;
        for (int i = 0; i < exp; ++i) res *= base;
        return res;
    }
}

class Function {
public:
    virtual double evaluate(double x) = 0;
    virtual ~Function() = default;
};

class Power : public Function {
    int base;
public:
    Power(int b) : base(b) {}
    double evaluate(double x) override {
        return MathOps::pow(base, static_cast<int>(x));
    }
};

int main() {
    cout << MathOps::pow(2, 3) << endl;
    Power p(2);
    cout << p.evaluate(3) << endl;
    return 0;
}
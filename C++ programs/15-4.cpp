#include <iostream>
using namespace std;

namespace MyNS {
    class MyException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "My exception";
        }
    };
}

int main() {
    try {
        throw MyNS::MyException();
    } catch (const MyNS::MyException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
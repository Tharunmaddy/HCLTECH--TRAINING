#include <iostream>
using namespace std;

namespace MyNS {
    struct MyStruct {
        int x;
    };
}

int main() {
    MyNS::MyStruct s = {10};
    cout << s.x << endl;
    return 0;
}
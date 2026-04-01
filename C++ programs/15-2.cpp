#include <iostream>
using namespace std;

namespace Company {
    namespace HR {
        void displayPolicy() {
            cout << "Policy" << endl;
        }
    }
}

int main() {
    Company::HR::displayPolicy();
    return 0;
}
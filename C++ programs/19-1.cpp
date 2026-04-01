#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    for (long long i = 0; i < 100000000; ++i) {
        sum += i * i;
    }
    cout << sum << endl;
    return 0;
}
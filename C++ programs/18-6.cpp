#include <iostream>
#include <future>
using namespace std;

long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; ++i) res *= i;
    return res;
}

int main() {
    std::future<long long> fut = std::async(std::launch::async, factorial, 10);
    cout << fut.get() << endl;
    return 0;
}
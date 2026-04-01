#include <iostream>
#include <thread>
using namespace std;

int main() {
    int counter = 0;
    std::thread t1([&]() { for (int i = 0; i < 1000; ++i) counter++; });
    std::thread t2([&]() { for (int i = 0; i < 1000; ++i) counter++; });
    t1.join();
    t2.join();
    cout << counter << endl;
    return 0;
}
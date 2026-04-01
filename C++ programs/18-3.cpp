#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int main() {
    int counter = 0;
    std::mutex mtx;
    std::thread t1([&]() { for (int i = 0; i < 1000; ++i) { std::lock_guard<std::mutex> lock(mtx); counter++; } });
    std::thread t2([&]() { for (int i = 0; i < 1000; ++i) { std::lock_guard<std::mutex> lock(mtx); counter++; } });
    t1.join();
    t2.join();
    cout << counter << endl;
    return 0;
}
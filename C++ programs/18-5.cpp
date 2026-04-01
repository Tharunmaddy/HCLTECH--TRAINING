#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Start" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout << "After sleep" << endl;
    std::this_thread::yield();
    cout << "After yield" << endl;
    return 0;
}
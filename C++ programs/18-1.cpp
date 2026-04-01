#include <iostream>
#include <thread>
using namespace std;

int main() {
    std::thread t([]() {
        cout << "Thread ID: " << std::this_thread::get_id() << endl;
    });
    t.join();
    return 0;
}
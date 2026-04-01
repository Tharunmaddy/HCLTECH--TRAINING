#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std;

int main() {
    std::mutex mtx;
    std::condition_variable cv;
    bool ready = false;
    std::thread t1([&]() {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        {
            std::lock_guard<std::mutex> lock(mtx);
            ready = true;
        }
        cv.notify_one();
    });
    std::thread t2([&]() {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [&]() { return ready; });
        cout << "Notified" << endl;
    });
    t1.join();
    t2.join();
    return 0;
}
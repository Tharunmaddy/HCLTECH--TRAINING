#include <iostream>
#include <string>
using namespace std;

class Logger {
    static Logger* instance;
    Logger() {}
public:
    static Logger* getInstance() {
        if (!instance) instance = new Logger();
        return instance;
    }
    void logMessage(const string& msg) {
        cout << msg << endl;
    }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger::getInstance()->logMessage("Hello");
    return 0;
}
#include <iostream>
using namespace std;

void log() {
    cout << __FILE__ << " " << __LINE__ << " " << __func__ << endl;
}

int main() {
    log();
    return 0;
}
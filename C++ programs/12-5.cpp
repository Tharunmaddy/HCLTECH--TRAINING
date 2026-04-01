#include <iostream>
#include <vector>
using namespace std;

int checksum(const vector<int>& arr) {
    int sum = 0;
    for (int i : arr) sum ^= i;
    return sum;
}

int main() {
    vector<int> v = {1, 2, 3};
    cout << checksum(v) << endl;
    return 0;
}
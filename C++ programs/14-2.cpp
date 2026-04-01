#include <iostream>
#include <queue>
using namespace std;

class Stack {
    std::queue<int> q1, q2;
public:
    void push(int x) {
        q1.push(x);
    }
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int res = q1.front();
        q1.pop();
        std::swap(q1, q2);
        return res;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    cout << s.pop() << endl;
    return 0;
}
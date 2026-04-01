#include <iostream>
#include <stack>
using namespace std;

class Queue {
    std::stack<int> s1, s2;
public:
    void push(int x) {
        s1.push(x);
    }
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int res = s2.top();
        s2.pop();
        return res;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    cout << q.pop() << endl;
    return 0;
}
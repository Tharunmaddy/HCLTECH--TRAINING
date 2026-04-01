#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Editor {
    std::stack<char> undo, redo;
    string text;
public:
    void type(char c) {
        text += c;
        undo.push(c);
        while (!redo.empty()) redo.pop();
    }
    void backspace() {
        if (!text.empty()) {
            redo.push(text.back());
            text.pop_back();
            undo.pop();
        }
    }
    void undo() {
        if (!undo.empty()) {
            redo.push(undo.top());
            text.pop_back();
            undo.pop();
        }
    }
    void redo() {
        if (!redo.empty()) {
            type(redo.top());
            redo.pop();
        }
    }
    void print() {
        cout << text << endl;
    }
};

int main() {
    Editor e;
    e.type('a');
    e.type('b');
    e.backspace();
    e.undo();
    e.redo();
    e.print();
    return 0;
}
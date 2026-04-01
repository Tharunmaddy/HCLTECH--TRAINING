#include <iostream>
using namespace std;

class WalletAuditor;

class Wallet {
    double balance = 0;
    friend class WalletAuditor;
public:
    void deposit(double amt) {
        if (amt > 0) balance += amt;
    }
    void withdraw(double amt) {
        if (amt > 0 && balance >= amt) balance -= amt;
    }
};

class WalletAuditor {
public:
    void report(const Wallet& w) {
        cout << "Balance: " << w.balance << endl;
    }
};

class Third {
public:
    void access(const Wallet& w) {
        // cout << w.balance << endl; // error
    }
};

int main() {
    Wallet w;
    w.deposit(100);
    WalletAuditor a;
    a.report(w);
    Third t;
    // t.access(w); // can't
    return 0;
}
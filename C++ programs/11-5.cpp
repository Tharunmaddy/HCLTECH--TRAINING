#include <iostream>
using namespace std;

enum Role {
    ADMIN = 1,
    USER = 2,
    MOD = 4
};

struct User {
    unsigned int roles : 3;
};

int main() {
    User u;
    u.roles = ADMIN | MOD;
    cout << (u.roles & ADMIN) << endl;
    return 0;
}
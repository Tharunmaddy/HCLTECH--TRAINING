#include <iostream>
#include <vector>
using namespace std;

class Observer {
public:
    virtual void update(double price) = 0;
    virtual ~Observer() = default;
};

class Subject {
    vector<Observer*> observers;
    double price;
public:
    void attach(Observer* o) { observers.push_back(o); }
    void setPrice(double p) {
        price = p;
        notify();
    }
    void notify() {
        for (auto o : observers) o->update(price);
    }
};

class App : public Observer {
public:
    void update(double price) override {
        cout << "Price updated: " << price << endl;
    }
};

int main() {
    Subject s;
    App a1, a2;
    s.attach(&a1);
    s.attach(&a2);
    s.setPrice(100);
    return 0;
}
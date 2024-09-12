#include <iostream>
using namespace std;

class Base {
public:
    int age;
};

class Middle1 : virtual public Base {
};

class Middle2 : virtual public Base {
};

class Impl : public Middle1, public Middle2 {
};

int main() {
    Impl impl;
    impl.Middle1::age = 100;
    impl.Middle2::age = 200;

    cout << impl.Middle1::age << endl;
    cout << impl.Middle2::age << endl;
}

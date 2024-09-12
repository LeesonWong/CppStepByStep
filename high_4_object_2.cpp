#include <iostream>
using namespace std;

class Base {
    public:
    int m_a;
    int m_b;

    void func() {
        cout << "Base" << endl;
    }

private:
    int m_c;
};

class Derived : public Base {
public:
    int m_d;
    void func() {
        cout << "Derived" << endl;
    }
};

int main() {
    Base obj1;
    cout << sizeof(obj1) << endl;

    Base obj2 = Derived();
    obj2.func();
    cout << sizeof(obj2) << endl;

    Base* ptr = new Derived();
    ptr->func();
    cout << sizeof(*ptr) << endl;
}



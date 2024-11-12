#include <iostream>
using namespace std;

class Base {
public:
    int age;
protected:
    int b;
private:
    int c;
};

class Middle1 : virtual public Base {
};

class Middle2 : virtual public Base {
};

class Impl : public Middle1, public Middle2 {
};

class Son1 : public Base {
    void say () {
        cout << age << endl;
        cout << b << endl;
        // cout << c << endl;
    }
};

class Son2 : protected Base {
    void say () {
        cout << age << endl;
        cout << b << endl;
        // cout << c << endl;
    }
};

class Son22 : protected Son2 {
    void say () {
        cout << age << endl;
        cout << b << endl;
        // cout << c << endl;
    }
};

class Son3 : private Base {
    void say () {
        cout << age << endl;
        cout << b << endl;
        // cout << c << endl;
    }
};

class Son33 : private Son3 {
    void say () {
        // cout << age << endl;
        // cout << b << endl;
        // cout << c << endl;
    }
};

class Obj {
public:
    Obj(int a) {
        cout << a << endl;
    }

    explicit Obj(int a, char c) {
        cout << a << endl;
        cout << c << endl;
    }
};

int main() {
    // Impl impl;
    // impl.Middle1::age = 100;
    // impl.Middle2::age = 200;
    //
    // cout << impl.Middle1::age << endl;
    // cout << impl.Middle2::age << endl;

    // Base base;
    // cout << base.age << endl;
    // cout << base.b << endl;

    int num = 10;
    char word = 's';

    Obj a(num);
    Obj b(word);
    Obj c = 30;

    Obj d = {50, 'd'};
}

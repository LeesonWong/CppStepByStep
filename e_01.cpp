#include <iostream>

class Son {
public:
    std::string name;
    int age;
};

class A {
public:
    int age;

    void func() {
        std::cout << "A::func()" << std::endl;
    }
};

class B : virtual public A {
public:
    void func() {
        std::cout << "B::func()" << std::endl;
    }
};

class C : virtual public A {
public:
    void func() {
        std::cout << "C::func()" << std::endl;
    }
};

class D : virtual public B, virtual public C {
public:
    void func() {
        std::cout << "D::func()" << std::endl;
    }
};


int main() {
    D d;
    d.B::age = 100;
    d.C::age = 200;
    d.B::func();
    d.C::func();

    std::cout << d.B::age << std::endl;
    std::cout << d.C::age << std::endl;
}

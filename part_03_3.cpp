#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>
#include <typeinfo>

using namespace std;

class Base {
  public:
    virtual void print() {
      cout << "Base::print" << endl;
    }
};

class Derived : public Base {
  public:
    virtual void print() {
      cout << "Derived::print" << endl;
    }
};

// 父子类型推断使用auto
int main() {

}
#include <iostream>
#include <string>
using namespace std;

template<class NameType = string, class AgeType = int>
class Person {
public:
    Person(NameType name, AgeType age) : name(name), age(age) {
    }

    void Show() {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }

private:
    NameType name;
    AgeType age;
};

void test01() {
    Person<> p("Black Shen Hua", 100);
    p.Show();
}


class ShowClass1 {
public:
    void Show1() {
        cout << "Show1" << endl;
    }
};

class ShowClass2 {
public:
    void Show2() {
        cout << "Show1" << endl;
    }
};

template <class T>
class ShowContent {
public:
    explicit ShowContent(const T &obj)
        : obj(obj) {
    }

    void func1 () {
        obj.Show1();
    }

    void func2 () {
        obj.Show2();
    }
private:
    T obj;

};

void test02() {
    ShowClass1 show1;
    ShowClass2 show2;

    ShowContent content(show1);

    content.func1();
}

int main() {
    test02();
}

#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        this->age = 50;
        cout << "Person Constructor" << endl;
    }

    Person(int num) {
        this->age = num;
        cout << "Person Constructor 11111" << endl;
    }

    Person(int num, std::string str) {
        this->age = num;
        this->name = str;
        cout << "Person Constructor 22222" << endl;
    }

    ~Person() {
        cout << "Person Destructor" << endl;
    }

    // 如果没有自定义的拷贝构造，会
    // Person(const Person& person) {
    //     cout << "Person CopyConstructor" << endl;
    //     // this->age = person.age + 1;
    // }

    // Person(Person& person) {
    //     person.age = 20;
    //     this->age = person.age + 1;
    // }

    int age;

    std::string name;
    friend class AnoObj;
    friend void FriendlyTest();
    friend void FriendlyTestAno();
};

void FriendlyTestAno() {

}

void FriendlyTest() {

}

class AnoObj {

};

// 括号法调用构造函数
void test1() {
    // Person p1(); 被认为是一个函数声明
    Person p1;
    p1.age = 18;
    Person p2(10);
    Person p3(p1);
    cout << p3.age << endl;
}

// 显示法调用构造函数
void test2() {
    // Person p1;
    // Person p2 = Person();
    // Person p3 = Person(10);
    // Person p4 = Person(p1);


    cout << "***********" << endl;
    Person x = Person();
    cout << "***********" << endl;
    cout << x.age << endl;
}

// 隐式转换法调用构造函数
void test3() {
    Person p1 = 10;
    Person p2 = {10, "aaa"};

}

int main() {
    cout << "----------------" << endl;
    test3();
    cout << "----------------" << endl;
}

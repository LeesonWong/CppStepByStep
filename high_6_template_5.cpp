#include <iostream>
#include <string>
using namespace std;

template<class T>
class Person {
public:
    Person(const T &&obj)
        : obj(obj) {
    }

private:
    T obj;
};

class Student : public Person<int> {
public:
};


template<class T1, class T2>
class Test {
public:
    Test(const T1 &m_name, const T2 &m_age)
        : m_name(m_name),
          m_age(m_age) {
    }

    void Show();
private:
    T1 m_name;
    T2 m_age;
};

template<class T1, class T2>
void Test<T1, T2>::Show() {
    cout << "name:" << m_name << "\t" << "age" << m_age << endl;
}


int main() {
    int num = 10;
    Student<int> s(num);
}

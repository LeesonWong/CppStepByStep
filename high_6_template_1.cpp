#include <iostream>
using namespace std;

template <typename T>
T GetMax(T a, T b) {
    cout << typeid(a).name() << endl;
    return a > b ? a : b;
}

struct Test{
    int v_{};
    Test() = default;
    Test(int v) :v_(v) {}
    bool operator>(const Test& t) const{
        return this->v_ > t.v_;
    }
};

class CGirl {
public:
    CGirl(int r) : m_rank(r) {}
    ~CGirl() = default;

    template <typename T>
    void CGirlFunc(T p) {
        cout << typeid(p).name() << endl;
        cout << p << endl;
    }

    // 声明特化的 Swap 函数为友元
    // friend void Swap(CGirl& t1, CGirl& t2);

    int age;
    int m_rank;
};

// 普通 Swap 模板
template <typename T>
void Swap(T& t1, T& t2) {
    T temp = t1;
    t1 = t2;
    t2 = temp;

    cout << "Normal" << endl;
}

// CGirl 特化的 Swap 实现
template <>
void Swap(CGirl& t1, CGirl& t2) {
    int temp = t1.m_rank;
    t1.m_rank = t2.m_rank;
    t2.m_rank = temp;

    cout << "CGirl" << endl;
}

template <>
void Swap(int& t1, int& t2) {
    int temp = t1;
    t1 = t2;
    t2 = temp;

    cout << "Special" << endl;
}

int main(){
    // int a{ 1 };
    // int b{ 2 };
    // std::cout << "int max(a, b) : " << ::GetMax(a, b) << '\n';
    // std::cout << "double max(a, b) : " << ::GetMax<double>(a, b) << '\n';
    //
    // Test t1{ 10 };
    // Test t2{ 20 };
    // std::cout << "Test max(t1, t2) : " << ::GetMax(t1, t2).v_ << '\n';
    //
    // CGirl girl{};
    // girl.CGirlFunc(11);
    // girl.CGirlFunc(girl);

    // bool flag = true;
    // if (flag) {
    //     string s = "Hello World!";
    //     cout << s << endl;
    // }

    CGirl girl(1);
    CGirl girl1(2);
    Swap(girl, girl1);

    int a = 10;
    int b = 20;
    Swap(a, b);

}
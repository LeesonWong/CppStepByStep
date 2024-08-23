#include <iostream>
using namespace std;


class Y {
};

class X {
public:
    // 构造
    X() {
        cout << "x ctor" << endl;
    }

    // 拷贝构造
    X(const X& x) {
        // 拷贝构造函数的实现
        cout << "copy" << endl;
    }

    // 移动构造
    X (const X&& x) noexcept {
        cout << "move" << endl;
    }

    X & operator=(const X &other) {
        cout << "1" << endl;
        if (this == &other)
            return *this;
        return *this;
    }

    X & operator=(X &&other) noexcept {
        cout << "2" << endl;
        if (this == &other)
            return *this;
        return *this;
    }

    ~X() {
        cout << "des" << endl;
    };

    int num = 4;
};

X make_x () {
    X temp;
    // temp.num = 99;
    return temp;
}

void test1() {
    // 普通构造函数
    // X x1;
    // X x01 = X();

    /**
     *  通过以下例子可以看出，以下两种方式都可以触发对应的构造，但是是拷贝还是移动，取决于x2是左值还是右值
     *  左值拷贝构造，右值移动构造
     *  ① X x1 = x2;
     *  ② X x1(x2);
     */
    // 拷贝构造
    // X x2;
    // X x3(x2);
    // X x4 = x2;

    // 移动构造 C++17 只能推断出最简单的ROV，易触发move操作  C++20 可以判断出较复杂的ROV避免了很多move操作
    X x5 = make_x();
    cout << x5.num << endl;
    // X x6(make_x());
    // cout << x6.num << endl;

    /**
     * 赋值和构造的区别也很简单，就是对象已经被构造完成了，语句中没有对象的原构造过程
     */
    // 拷贝赋值构造
    // X x7;
    // X x8;
    // x8 = x7;

    // 移动赋值构造
    // X x9;
    // make_x();
    // x9 = make_x();
}

// 返回内部声明的变量


Y func() {
    return Y();
}

void test2() {
    // Y y;
    // Y& y1 = y;
    // cout << &y << endl;
    // Y& y2 = (y1 = func());
    // cout << &y1 << endl;
    // cout << &y2 << endl;

    // Y& res = func();
    // cout << &res << endl;
}

// 右值引用的例子
void test3() {
    X x = make_x();
    cout << x.num << endl;
    // cout << typeid(make_x()).name() << endl;
}

int main () {
    // test1();
    // test2();
    test3();
    return 0;
}
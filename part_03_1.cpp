#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>

using namespace std;

// 获取当前时间戳（毫秒级精度）
long long getCurrentTimestampInMilliseconds() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

template<auto N>
void foo() {
    std::cout << N << std::endl;
}

class Foo {
public:
    static const auto home = 5;
};

// auto关键字
// 原先auto用来声明自动变量，就是有自动声明周期的变量，这是一个历史问题现在已经没有这种写法了
// 只要是初始化语句，可确定类型的情况下，就可以使用auto
int main() {
    // 1、auto同时声明多个变量，原则上根本不推荐这么写，不推荐同时声明多个变量尤其是加上推导这个场景
    // auto后的第一个类型是 *pa = &a所以auto是int
    int a = 5;
    auto *pa = &a, b = 10;

    // 2、初始化语句比较复杂时，会使用表达能力更强的类型。这个auto是double类型
    auto dd = true ? 1 :8.8;

    // 3、静态成员常量，因为允许静态成员常量在声明时就赋值，所以也可以用auto推导
    // cout << Foo::home << endl;
    return 0;
}

#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>
#include <typeinfo>

using namespace std;

class Person {};

// 编译失败
// auto sum () {
//     bool res = true;
//
//     if (res) {
//         return 0;
//     } else {
//         long long num = 10;
//         return num;
//     }
// }

// auto的推导规则
int main () {
    // 1、如果auto声明的变量是按值初始化，忽略CV限定符，即const和volatile
    const int i = 10;
    auto j = i; // 不带CV
    auto &ri = i; // const int&
    auto *pi = &i; // const int*
    const auto ii = i; // const int

    const Person p;
    auto ap = p;
    auto &apr = p;
    auto *app = &p;

    // 2、auto初始化时，如果对象是引用，引用属性被忽略
    int x = 10;
    int &y = x;
    auto z1 = x;
    auto z2 = y;
    z1 = 20;
    z2 = 30;
    cout << x << endl;
    cout << z1 << endl;
    cout << z2 << endl;

    // 3、使用auto&&（万能引用），如果接受左值，则为左值引用
    int m = 5;
    auto&& n = m;
    auto && num = 5;

    // 4、auto声明变量，目标对象是数组或函数，推导为指针
    int arr[5];
    auto aArr = arr;
    auto func = [](int a) { };
    cout << typeid(aArr).name() << endl;
    cout << typeid(func).name() << endl;

    // 5、auto声明变量语法糖
    auto num1{100};
    // auto num2{200, 300}; 运行异常
    auto arr1 = {100, 200 , 300 , 400 , 500 , 600 , 700 , 800 , 900};
    auto arr2 = {999}; // 一个元素也是list
    cout << *(arr1.begin() + 1) << endl;
    cout << *arr2.begin() << endl;

    // 6、返回类型的推导 在分支语句（三目表达式）中按照范围最大的类型推断; 但是函数返回值必须确定类型，不提示，但是编译失败
    // cout << sum() << endl;
}

#include <iostream>
using namespace std;

template<typename T = int>
T GetMax(T a, T b) {
    return a > b ? a : b;
}

template<typename T1, typename T2, typename RT = decltype(true ? T1{} : T2{})>

RT max(const T1& a, const T2& b) { // RT 是 std::string
    return a > b ? a : b;
}

void test01() {
    auto i = 10;
    auto b = 1.2;
    auto str = "Hello, world!";
    char *ano = "Hello, world!";

    cout << typeid(i).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(str).name() << endl;
    cout << typeid(ano).name() << endl;
}

int main() {
    auto a = 1;
    auto b = 2.2;
    cout << GetMax<double>(a, b) << endl;

    int num1 = 10;
    char num2 = 65;
    // 移除<int>不能触发隐式类型转换
    cout << GetMax<int>(num1, num2) << endl;
}

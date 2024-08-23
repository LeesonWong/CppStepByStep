#include <iostream>
#include <vector>
#include <type_traits>
#include <chrono>
using namespace std;

class A {
public:
    int a;
    double b;
};

template <typename R, typename T1, typename T2>
R sum (T1 t1, T2 t2) {
    return t1 + t2;
}

template<typename T1, typename T2>
auto sum2(T1 a1, T2 a2) -> decltype(a1 + a2) {
    return a1 + a2;
}

template <typename T>
auto& return_ref(T& t) {
    return t;
}

int x = 1;

int GetValue(int val) {
    return x;
}

// 获取当前时间戳（毫秒级精度）
long long getCurrentTimestampInMilliseconds() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

void test01() {
    long long loop = 1000000000;

    int num1 = 0;
    auto begin1 = getCurrentTimestampInMilliseconds();
    for (auto iter = 0;iter < loop;iter++) {
        num1++;
    }
    auto end1 = getCurrentTimestampInMilliseconds();
    cout << "iter++:\t" << (end1 - begin1) << endl;

    int num2 = 0;
    auto begin2 = getCurrentTimestampInMilliseconds();
    for (auto iter = 0;iter < loop;iter++) {
        ++num2;
    }
    auto end2 = getCurrentTimestampInMilliseconds();
    cout << "++iter:\t" << (end2 - begin2) << endl;


}

int main () {
    int a = 1;
    int b = 2;
    int* ptr = &a;
    cout << *(ptr+3) << endl;
    return 0;
}
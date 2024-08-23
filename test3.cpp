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

int main() {
    // const int loop = 10000000;
    //
    // long long start1 = getCurrentTimestampInMilliseconds();
    // for (auto count = 0;count < loop;count++) {
    //     bigger1(count, count + 1);
    // }
    // long long end1 = getCurrentTimestampInMilliseconds();
    // cout << "Not inline\t" << (end1 - start1) << endl;
    //
    // long long start2 = getCurrentTimestampInMilliseconds();
    // for (auto count = 0;count < loop;count++) {
    //     bigger2(count, count + 1);
    // }
    // long long end2 = getCurrentTimestampInMilliseconds();
    // cout << "Yes inline\t" << (end2 - start2) << endl;

    // Container<int> countainer;
    // cout << Container<string>::count << endl;
    // cout << Container<int>::count << endl;
    // cout << countainer.count << endl;


    // int a = 100;
    // TwoTemplate("This is a base_string", a);

    int a = 10;
    int b = 20;
    std::swap(a, b);

    cout << "a:\t" << a << endl;
    cout << "b:\t" << b << endl;

    return 0;
}

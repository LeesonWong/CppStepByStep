#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>

using namespace std;

class Solution {
public:
    // Solution(int age)
    //     : age(age) {
    // }
    int age;
};

union Un {
    int a;
    double b;
    Solution s;
};

/**
 * 1、联合类型union 用一块内存存储数据，数据类型是不确定的
 * 2、不能存储非平凡类型（可以自定义类型或其他类，但是不能自定义构造函数）
 * 3、TODO C++11新增了一些特性，但是对于非通信协议来说，使用union完全没意义
 *
 * @return
 */
int main(int argc, char *argv[]) {
    Un u;

    u.a = 1;
    cout << u.a << endl;
    cout << u.b << endl;

    u.b = 2.0;
    cout << u.a << endl;
    cout << u.b << endl;
}

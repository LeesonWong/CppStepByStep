#include <iostream>
#include <string>
using namespace std;

#define PRINT_L(X) std::cout << sizeof(X) << std::endl

class Solution {
public:
    int age;
    long height : 8;
    string name;
};

// short 2
struct MySize0 {
    char c1;
    short s1;
};

// short 2
struct MySize1 {
    bool b1;
    short s1;
};

// short 2
struct MySize2 {
    short s1;
};

// int 4
struct MySize3 {
    int i1;
};

// long 4
struct MySize4 {
    long l1;
};

// long long 8
struct MySize5 {
    long long ll1;
    bool b1;
    bool b2;
    bool b3;
    bool b4;
    bool b5;
    int i1;
};

// double 8
struct MySize6 {
    double d1;
    // float f1;
};

// 位域 对复杂成员声明位域会导致程序异常，对于基础类型有些用
// 一般只在特别需要节省内存的场景使用，例如嵌入式系统和低级系统编程
int main() {
    Solution s;
    s.age = 5;
    s.height = 100;
    s.name = "Hello World";

    // cout << s.age << endl;
    // cout << s.height << endl;
    // cout << s.name << endl;

    MySize0 size0;
    MySize1 size1;
    MySize2 size2;
    MySize3 size3;
    MySize4 size4;
    MySize5 size5;
    MySize6 size6;

    PRINT_L(size0);
    PRINT_L(size1);
    PRINT_L(size2);
    PRINT_L(size3);
    PRINT_L(size4);
    PRINT_L(size5);
    PRINT_L(size6);

    return 0;
}
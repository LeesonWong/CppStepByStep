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

// 位域 对复杂成员声明位域会导致程序异常，对于基础类型有些用
// 一般只在特别需要节省内存的场景使用，例如嵌入式系统和低级系统编程
int main() {
    Solution s;
    s.age = 5;
    s.height = 100;
    s.name = "Hello World";

    cout << s.age << endl;
    cout << s.height << endl;
    cout << s.name << endl;
}
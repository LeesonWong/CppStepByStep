#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 20;

int g_c_a = 10;
int g_c_b = 20;

static const int g_s_c_a = 10;
static const int g_s_c_b = 10;

int main() {
    int a = 10;
    int b = 20;
    cout << "局部变量a地址：" << &a << endl;
    cout << "局部变量b地址：" << &b << endl;

    // const常量
    const int c_a = 10;
    const int c_b = 20;
    cout << "局部const常量c_a地址：" << &c_a << endl;
    char* str = "Hello World!";
    cout << "局部const常量c_b地址：" << &c_b << endl;

    cout << "字符串变量str地址：" << &str << endl;

    // 全局变量
    cout << "全局变量g_a地址：" << &g_a << endl;
    cout << "全局变量g_b地址：" << &g_b << endl;

    // 静态变量
    static int s_a = 10;
    static int s_b = 20;
    cout << "静态变量s_a地址：" << &s_a << endl;
    cout << "静态变量s_b地址：" << &s_b << endl;

    // 常量 字符串常量
    cout << "字符串常量地址：" << &"Hello World" << endl;

    // 常量
    cout << "全局const常量g_c_a地址：" << &g_c_a << endl;
    cout << "全局const常量g_c_b地址：" << &g_c_b << endl;

    cout << "全局static const常量g_s_c_a地址：" << &g_s_c_a << endl;
    cout << "全局static const常量g_s_c_b地址：" << &g_s_c_b << endl;

    static const int s_c_a = 10;
    static const int s_c_b = 10;
    cout << "局部static const常量s_c_a地址：" << &s_c_a << endl;
    cout << "局部static const常量s_c_b地址：" << &s_c_b << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


// 模板函数
template <class T> bool bigger1 (T a, T b) {
    return a > b;
}

template <typename T> inline int bigger2 (T a, T b) {
    return a + b;
}

template<typename N>
class Container {
public:
    static int count;
    vector<N> vec;
};

int Container<string>::count = 10;
int Container<int>::count = 20;

template <typename T>
void func() {
    typename T::innerType var; // 必须使用 typename
}

// 定义一个结构体 Foo，包含一个嵌套类型 innerType
struct Foo {
    static int COUNT;
    typedef int innerType;
};
int Foo::COUNT = 100;

// 定义一个模板函数 func
template <typename T>
void funcX() {
    // 没有使用 typename，会导致编译错误
    typename T::innerType var = 5; // 错误：'T::innerType' is not a type
    std::cout << "var = " << var << std::endl;
}

template <typename T, typename N>
void TwoTemplate1(T&& t, N&& n) {
    cout << "T;\t" << typeid(t).name() << ";\t" << t << endl;
    cout << "N;\t" << typeid(n).name() << ";\t" << n << endl;
}

template <typename T, typename N, auto NU>
void TwoTemplate2(T&& t, N&& n) {
    cout << "T;\t" << typeid(t).name() << ";\t" << t << endl;
    cout << "N;\t" << typeid(n).name() << ";\t" << n << endl;
    cout << NU << endl;
}

int main () {
    TwoTemplate1<string, string>(string("aaa"), string("bbb"));
    TwoTemplate2<string, string, 99>(string("aaa"), string("bbb"));
    return 0;
}

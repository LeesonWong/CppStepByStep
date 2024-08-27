#include <functional>
#include <iostream>
using namespace std;

inline namespace Parent {
    namespace Child1 {
        void foo () {
            cout << "This is Child1" << endl;
        }
    }

    inline namespace Child2 {
        void foo () {
            cout << "This is Child2" << endl;
        }
    }
}

// 嵌套namespace的简写
namespace Parent::Child1 {
    void foo2() {
        cout << "This is Child1 foo next" << endl;
    }
}

// 内联和嵌套命名空间
// 命名空间的作用，防止不同的库、文件使用同名的类、函数
int main()
{
    // 内联的命名空间的成员，可以当做父空间的成员来使用
    Parent::foo();
    // 并且这种inline可以传递
    Parent::Child1::foo2();
}
